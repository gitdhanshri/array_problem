#include<iostream>
using namespace std;
int sum_all_element(int arr[] ,int size){
	 int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
}
int main(){
   
   	int arr[]={1,2,3,4,5,6,7,8,9,10};
   		int size=sizeof(arr)/sizeof(arr[0]);
   		int sum=sum_all_element(arr,size);
   
   		cout<<"\nSum of array element-->"<<sum;
       return 0;
}
