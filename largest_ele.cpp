#include<iostream>
using namespace std;
int largest(int arr[],int size){
int max=0;
for(int i=1;i<size;i++){
    if(arr[i]>arr[max]){
        max=i;
    }
}
return arr[max];
 }
// int second_max(int arr[],int size){
//    int max=largest(arr,size);
//     int s_max=-1;
//    // cout<<"\ns_max-->"<<arr[s_max];
//     for(int i=0;i<size;i++){
//         if(arr[s_max]<arr[i]&&arr[i]!=max){
//             s_max=i;
//         }
//     }
//     return arr[s_max];
//}
// int second_max(int arr[],int size){
//    int max=largest(arr,size);
//     int s_max=-1;
//   for(int i=0;i<size;i++){
//     if(arr[i]!=max){
//         if(s_max==-1||(arr[i]>arr[s_max])){
//             s_max=i;
//         }
//     }
//   }
//     return arr[s_max];
// }
int second_max(int arr[],int size){
   int res=-1,largest=0;
    for(int i=1;i<size;i++){
                    if(arr[i]>arr[largest]){
                        res=largest;
                        largest=i;
                    }
                    else if(arr[i]!=arr[largest]){
                        if(res==-1||arr[i]>arr[res]){
                            res=i;
                        }
                    }
                    
            }
   return arr[res];  
}
   int main(){
    int arr[]={5,20,12,20,8};
    int size=sizeof(arr)/sizeof(arr[0]);
int num=largest(arr,size);
cout<<"\nLargest element in array->"<<num;
cout<<"\n";
int num1=second_max(arr,size);
cout<<"\n Second Largest element in array->"<<num1;
cout<<"\n";
    return 0;
}