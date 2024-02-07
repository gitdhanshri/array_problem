#include<iostream>
using namespace std;
int max(int a,int b){
		if(a>b){
		return a;
		}
		else{
		return b;
		}
}
int min(int a,int b){
	if(a>b){
	return b;
	}
	else{
	return a;
	}
}/*
m-1having time complexity of n-square
int max_diff(int arr[],int size){
int res=arr[1]-arr[0];
	for(int i=0;i<size;i++){
	for(int j=i+1;j<size;j++){
	res=max(res,arr[j]-arr[i]);
	}
	}
return res;	     
}*/
//m-2having time complexity of n
int max_diff(int arr[],int size){
	int res=arr[1]-arr[0];
	int min_val=arr[0];
		for(int i=1;i<size;i++){
		res=max(res,arr[i]-min_val);
		min_val=min(min_val,arr[i]);
		}
return res;	     
}
int main(){
int arr[]={2,3,10,6,4,8,1};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"\nMax difference is from  right to Left\n";
max_diff(arr,size);
cout<<max_diff(arr,size);
cout<<"\n";
return 0;
}
