#include<iostream>
using namespace std;
int max(int a,int b)
{
    if (a>b)
    return a;
    else
    return b;
    
}
int length_arr(int arr[],int size)
{
        int count =1,res=1;
    for(int i=1;i<size;i++)
{
if((arr[i]%2==0&&arr[i-1]%2!=0)||(arr[i]%2!=0&&arr[i-1]%2==0))
    {
        count++;
        res=max(res,count);
    }
    else{
        count=1;

}    }
    return res;
}
int main()
{
    int arr[]={5,10,20,3,3,8,9,10,11,6};
    int size=sizeof(arr)/sizeof(arr[0]);
int arr_len=length_arr(arr,size);
cout<<"\nMax length of even odd array is -->>"<<arr_len;
cout<<"\n\n";
return 0;
}
