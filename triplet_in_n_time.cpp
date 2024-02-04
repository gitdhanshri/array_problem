#include<iostream>
using namespace std;
bool isTriplet(int arr[],int size,int x){
    for(int i=0;i<size-2;i++){
        for(int j=i+1;j<size-1;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    return true;
                }
            }
        }
    }
    return false;
}
int main(){
int arr[]={2,3,4,8,9,20,40};
int size=sizeof(arr)/sizeof(arr[0]);
int pair=isTriplet(arr,size,32);
cout<<"\nForm triplet or not -->"<<pair;
cout<<"\n";
return 0;
}