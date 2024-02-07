#include<iostream>
using namespace std;
void findLeader(int arr[],int size){
	for(int i=0;i<size;i++){
	        bool flag=false;
		for(int j=i+1;j<size;j++){
			if(arr[i]<=arr[j]){
			flag=true;
			break;
			}
		}
		if(flag==false){
		cout<<arr[i]<<"    ";
		}
	  }
	//cout<<"\nMerged array";
}
int main(){
int arr[]={7,10,4,10,6,5,2};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"\nLeaders in an array from right to Left\n";
findLeader(arr,size);
cout<<"\n";
return 0;
}
