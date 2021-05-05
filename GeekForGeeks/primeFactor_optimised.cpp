#include<iostream>
#include <vector>
using namespace std;
int main(){

    int n;
    cin>>n;
    if(n<=1)
    cout<<1;
    while(n%2==0){
        n = n/2;
        cout<<2<<" ";
    }
    while(n%3==0){
        n = n/3;
        cout<<3<<" ";
    }
    for(int i=5; i*i<=n; i= i+6){
        while(n%i ==0){
            n = n/i;
            cout<<i<<" ";
        }
        while(n%(i+2) ==0){
            n = n/(i+2);
            cout<<i+2<<" ";
        }
    }
    if(n>3)
    cout<<n;
    return 0;
}
