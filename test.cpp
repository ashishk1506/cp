#include<iostream>

using namespace std;

int getBit(int n, int p){
	return ((n & (1<<p))!=0);
}
int countBit(int n){
	int c = 0;
	while(n !=0)
	{
		if(n & 1 == 1)
		c++;
		n = n>>1;
	}
	return c;
}
int setBit(int n, int p){
	return ((1<<p) | n);
}
int clearBit(int n, int p){
	return (~(1<<p) & n);
}
int updateBit(int n, int p, int b){
	if(b == 1 ){
		return ((1<<p)|n);
	}
	else
	return (~(1<<p) & n);
}
int main(){
	
	cout<<getBit(5,2);
	cout<<countBit(5);
	cout<<setBit(5,1);
	cout<<clearBit(5,2);
	cout<<updateBit(5,1,1);
	cout<<updateBit(5,1,0);
	return 0;
}