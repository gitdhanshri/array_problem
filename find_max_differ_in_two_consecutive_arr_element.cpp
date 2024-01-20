#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int max_diff(int arr[],int size)
{
    int res=arr[1]-arr[0];
    //int max_d=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
         res=max(res,arr[j]-arr[i]);   
        }
    }
    return res;
}
int main()
{
    int arr[]={7,9,5,6,3,2};
  //  int arr[]={2,3,10,6,4,8,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max_differce=max_diff(arr,size);
    cout<<"\nMaximum differece between two array elements is-->"<<max_differce;
    cout<<"\n\n";
    return 0;
}