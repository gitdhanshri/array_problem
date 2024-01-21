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
int count_ones(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        int res=0;
        for(int j=i;j<size;j++)
        {
            if(arr[j]==1)
            {
                res++;
            }
            else{
                break;
            }
        }
        count=max(count,res);
    }
    return count;
}
int main()
{
    int arr[]={1,0,0,0,1,0,1,1,0,1,0,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ones=count_ones(arr,size);
    cout<<"\n the number of max ones in given array -->"<<ones;
    cout<<"\n\n";
    return 0;
}