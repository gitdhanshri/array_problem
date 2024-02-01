#include<iostream>
using namespace std;
int find_repeat(int arr[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
			return arr[i];
			}
		}	
	}
	return -1;
}
int main(){
	int arr[]={0,4,2,1,3,6,5,4,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	int num= find_repeat(arr,size);
	cout<<"Reapting number is-->"<<(num);
	cout<<"\n\n";
	return 0;
}
