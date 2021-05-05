#include<iostream>
#include <vector>
using namespace std;
int main(){

    bool isPrime(int);
    int n;
    cin>>n;
    if(isPrime(n))
    cout<<n<<"hi";
    else{
        vector<int> a;
        for(int j=2 ;j<=n; j++){
            if(isPrime(j))
            {
                while(n%j == 0){
                    n = n/j;
                    a.push_back(j);
                }
            }
        }
        for(int j=0; j<a.size(); j++)
        cout<<a[j]<<" ";
    }
    return 0;
}
    bool isPrime(int x)
    {
        if(x==1)
        return 0;
        if(x ==2 || x ==3)
        return 1;
        if(x%2 ==0 || x%3 == 0)
        return 0;
        for(int i=5; i*i <=x ; i=i+6){
            if(x % i ==0 || x % (i+2) == 0)
            return 0;
        }
        return 1;
    }