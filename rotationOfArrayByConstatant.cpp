#include<iostream>
using namespace std;
//method -1
// int reverseTheArray(int arr[],int size,int low,int high){
//     while(low<=high){
//        int temp;
//        temp=arr[low];
//        arr[low]=arr[high];
//        arr[high]=temp;
//        low++;
//        high--;
//     }
//     return 0;
// }
// void rotationBy_k(int arr[],int size,int k){
//       reverseTheArray(arr,size,0,k-1);
//        reverseTheArray(arr,size,k,size-1);
//        reverseTheArray(arr,size,0,size-1);

// }
//method -2
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}
void moving_ele(int arr[],int size,int k){
    int temp[size];
    for(int i=0;i<size-k;i++){
        temp[i]=arr[k+i];
    }
    for(int i=0;i<k;i++){
        temp[(size-k)+i]=arr[i];
    }
    cout<<"\n\nprinting an array\n";
    for(int i=0;i<size;i++){
        cout<<temp[i]<<"  ";
    }
}
int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nbefore rotation by constatnt k=3\n";
    printArray(arr,size);
    int k;
    cout<<"\nEnter value of k-->";
    cin>>k;
    cout<<"\nAfter rotation by constatnt k=3 \n";
    if(k>size){
        k=k%size;
    moving_ele(arr,size,k);
    }   
    else{
    moving_ele(arr,size,k);
    }         
    cout<<"\n";
    return 0;
}      