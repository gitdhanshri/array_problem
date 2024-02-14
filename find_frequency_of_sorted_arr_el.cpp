#include<iostream>
using namespace std;
void count_fre(int arr[],int size){
int fre=1;
int i=1;
while(i<size){
	while(i<size&&arr[i]==arr[i-1]){
	fre++;
	i++;
	}
cout<<"\nfrequency of-->"<<arr[i-1]<<"  "<<fre;
i++;
fre=1;
}
if(size==1||arr[size-1]!=arr[size-2]){
cout<<arr[i-1]<<"  "<<1;

}
}
int main(){
int arr[]={10,10,10,20,20,30,30,30,30};
int size=sizeof(arr)/sizeof(arr[0]);
count_fre(arr,size);

cout<<"\n";
return 0;
}

