#include<iostream>
using namespace std;
void print_arr(int arr[],int size){
        for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }  
}
// //method -1
void rotate_0Last(int arr[],int size){
   // int count=0;
    for(int i=0;i<size-1;i++){
        if(arr[i]==0){
            for(int j=i+1;j<size;j++){
                if(arr[j]!=0){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
            }
        }
    }
}
//method -2
//  void rotate_0Last1(int arr[],int size){
// int count=0;
// for(int i=0;i<size;i++){
//   //  if(arr[i]!=0&&arr[count]==0){
//     if(arr[i]!=0){
//         int temp=arr[i];
//         arr[i]=arr[count];
//         arr[count]=temp;
//         count++;
//     }
// }
// }
int main(){
    int arr[]={4,2,4,3,0,6,0,5,1,0,12,0,11,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    print_arr(arr,size);
    cout<<"\nAfter moving\n";
    rotate_0Last(arr,size);
        print_arr(arr,size);
        cout<<"\n";
return 0;
}