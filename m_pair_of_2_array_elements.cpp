#include<iostream>
using namespace std;
	bool isPair(int arr[],int size ,int x){
	int i=0,j=size-1;
	while(i<j){
			if(arr[i]+arr[j]==x){
			return true;
			}
			else if(arr[i]+arr[j]<x){
			i++;

			}
			else{
			j--;
			}
	}
	return false;
}
int main(){

	int arr[]={2,4,8,9,11,12,20,30};
	int size=sizeof(arr)/sizeof(arr[0]);
	int num=isPair(arr,size,23);
	cout<<"\npair is found or not-->"<<num;
	cout<<"\n";
	int num_1=isPair(arr,size,65);
	cout<<"\npair is found or not-->"<<num_1;
	cout<<"\n";
	return 0;
}
