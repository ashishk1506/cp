#include<iostream>
#include<vector>
using namespace std;
int main(){
int p;
cin>>p;
int n;
cin>>n;
int res = 1;
while(n>0){
    if(n&1){
        res = res*p;
    }
    p = p*p;
    n = n/2;
}
cout<<res;
return 0; 
}
