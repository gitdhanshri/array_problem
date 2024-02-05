#include<iostream>
using namespace std;
bool sum_index(int arr[],int size,int target){
        int low=0,high=size-1;
        while(low<high){
            int sum=arr[low]+arr[high];
            if(sum==target){
                return true;
            }
            else if(sum<target){
                low++;
            }
            else{
                high--;
            }
        }
        return false;
}
int main()
{
int arr[]={1,3,5,8,9,11,13,15};
int size=sizeof(arr)/sizeof(arr[0]);
int index=sum_index(arr,size,21);
cout<<"\nThe index is found or not-->"<<index;
cout<<"\n";
return 0;
}