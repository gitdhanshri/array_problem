#include<iostream>
using namespace std;
int second_max(int arr[],int size){
	int max=0,s_max=0;
	int temp;
	for(int i=0;i<size;i++){
		if(arr[i]>arr[max]){
			temp=max;
			max=i;
			s_max=temp;
			
		}
		 else if(arr[i]<arr[max]){
		 	if(arr[i]>arr[s_max]){
		 		s_max=i;
		         }
		 }
	
	}
	return arr[s_max];
	
}
int main(){
	int arr[]={22,3,8,9,12,20};
	int size=sizeof(arr)/arr[0];
	int smax=second_max(arr,size);
	cout<<"\nSecond max-->"<<smax;
	
	cout<<"\n";
	return 0;
}
