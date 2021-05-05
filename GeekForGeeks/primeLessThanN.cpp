#include<iostream>
using namespace std;
int main(){
    bool isPrime(int );
    int n;
    cin>>n;
    if(n == 1)
    cout<<0<<" ";
    if(n == 2)
    cout<<2<<" ";
    if(n>2)
    cout<<2<<" "<<3<<" ";
    for(int j=5; j<=n; j=j+6){
        if(isPrime(j))
        cout<<j<<" ";
        if(isPrime(j+2))
        cout<<j+2<<" ";
    }
    return 0;
}
bool isPrime(int n){
    if(n == 1)
    return false;
    if(n == 2 || n == 3)
    return true;
    if(n%2 == 0)
    return false;
    if(n%3 == 0)
    return false;
    for(int i=5; i*i<= n; i=i+6){
        if(n%i == 0 || n%(i+2) == 0)
        return false;
    }
    return true;
}