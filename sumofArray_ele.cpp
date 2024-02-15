#include<iostream>
using namespace std;
int sumof_ele(int arr[] ,int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
}
int main(){
	int arr[]={2,7,8,33,21,12,23,24,45};
	int size=sizeof(arr)/sizeof(arr[0]);
	int sum=sumof_ele(arr,size);
	cout<<"\nSum of array element--> "<<sum;
	cout<<"\n";
	return 0;

}

