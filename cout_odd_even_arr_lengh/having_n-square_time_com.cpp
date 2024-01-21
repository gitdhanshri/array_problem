#include<iostream>
using namespace std;
 int max(int a,int b)
{
    if (a>b)
    return a;
    else
    return b;
    
}
  int arr_len(int arr[],int size)
  {
    int res=0;
    for(int i=0;i<size;i++)
        {
          int count=1;
for(int j=i+1;j<size;j++)
     {
    //int arr[]={5,10,20,6,3,8};
    if((arr[j]%2==0&&arr[j-1]%2!=0)||(arr[j]%2!=0&&arr[j-1]%2==0))
    {
        count++;
    res=max(res,count);
    }
    else
    {
        break;

     }
     }
        }
return res;
 }

int main()
{
    int arr[]={5,10,20,3,3,8,9,10,11,6};
    int size=sizeof(arr)/sizeof(arr[0]);
int len=arr_len(arr,size);
cout<<"\nMax length of even odd array is -->>"<<len;
cout<<"\n\n";
return 0;
}
