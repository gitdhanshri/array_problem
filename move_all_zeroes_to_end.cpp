#include<iostream>
using namespace std;
void print(int arr[],int size);
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
// int move_0_to_end(int arr[],int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             for(int j=i+1;j<size;j++){
//                     if(arr[j]!=0){
//                                 swap(arr[i],arr[j]);
//                     }
//                 }   
//         }
//     }
//     return 0;
// }
int move_0_to_end(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    return 0;
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"  "<<arr[i];
    }
}
int main(){
    int arr[]={8,5,0,10,0,20};
    int size=sizeof(arr)/sizeof(arr[0]);
move_0_to_end(arr,size);
print(arr,size);
cout<<"\nAfter moving zeroes to end-->";
//print(arr,size);
cout<<"\n";
move_0_to_end(arr,size);
print(arr,size);

return 0;
}
