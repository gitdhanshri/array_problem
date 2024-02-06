#include<iostream>
using namespace std;
void print(int arr[],int size);
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"  "<<arr[i];
    }
}
void left_rotation(int arr[],int size){
    int last=arr[0];
   // int temp[size];
    for(int i=1;i<size;i++){
    arr[i-1]=arr[i];
    }
    arr[size-1]=last;
}
int main(){
    int arr[]={8,5,10,15,12,20};
    int size=sizeof(arr)/sizeof(arr[0]);
cout<<"\nAfter moving  first to end-->";
print(arr,size);
cout<<"\n";
left_rotation(arr,size);
print(arr,size);

return 0;
}
