#include<iostream>

using namespace std;

int main(){

int isFour(int);
int n;
cin>>n;
cout<<isFour(n);

}

      int isFour(int n){
            int count = 0;
            int sum = 0;
            for(int i=2; i*i<=n; i++){
                if(n%i==0)
                {
                    sum = sum + i + n/i;
                    count++;
                }
                if(count>1)
                {
                    return 0;
                }
            }
            if(count == 1)
                return sum + n + 1;
            else
                return 0;
        }