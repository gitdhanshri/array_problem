#include<iostream>
using  namespace std;
//function having time complexity 0(n-square)
int lagest_ele(int arr[],int size){
	for(int i=0;i<size;i++){
		bool flag=true;
	for(int j=i;j<size;j++){
		if(arr[j]>arr[i]){
			flag=false;
			break;
		}
		}
		
		if(flag==true){
		return arr[i];
		}
		}	
	   	return -1;	
}	   	
int main(){
	int array[]={10,12,5,8,23,13};
	int size=sizeof(array)/sizeof(array[0]);
	int largest=lagest_ele(array,size);
	cout<<"lagest element-->";
	cout<<largest;
	cout<<"\n";
	return 0;
}
