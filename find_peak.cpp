#include<iostream>
using namespace std;
	int find_peak(int arr[],int n){
		if(n==1){
		cout<<"first element is also peak->"<<arr[0];
		}
		
		if(arr[0]>arr[1]){
		cout<<"first element is also peak->"<<arr[0];
		}
		
		if(arr[n-1]>arr[n-2]){
		return arr[n-1];
		}
		
		for(int i=1;i<n-1;i++){
		  if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1]){
			return arr[i];
		  }
		}
		return -1;
	}
	int main(){
		int arr[]={16,7,19,23,21,20,12};
		int size=sizeof(arr)/sizeof(arr[0]);
		int peak=find_peak(arr,size);
		cout<<"\nPeak element -->"<<peak;
		
		return 0;
	}
