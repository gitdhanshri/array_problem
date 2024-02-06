#include<iostream>
using namespace std;

//method 1 having 0(n)-time& 0(n)-space
// void  r_dupliacte(int arr[],int size){
//             int temp[size];
//             temp[0]=arr[0];
//             int count =1;
//             for(int i=1;i<size;i++){
//                 if(arr[i]!=arr[i-1]){
//                     temp[count]=arr[i];
//                     count++;
//                 }
//             }
//         cout<<"\nAfter removing  all  duplicates:->";
//         for(int i=0;i<count;i++){
//             cout<<temp[i]<<"  ";
//         }
//         cout<<"\n ";
// }
void  r_dupliacte(int arr[],int size){
            int count =1;
            for(int i=1;i<size;i++){
                if(arr[i]!=arr[i-1])
                {
                    arr[count]=arr[i];
                    count++;
                }
            }
        cout<<"\nAfter removing  all  duplicates:->";
        for(int i=0;i<count;i++){
            cout<<arr[i]<<"  ";
        }
        cout<<"\n ";
}

int main(){
    int arr[]={10,20,20,30,30,50,50,60,60,70,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    r_dupliacte(arr,size);

    return 0;
}