#include<iostream>
using namespace std;
void rotate_arr(int arr[],int size,int d)
{
    int temp[d];
for(int i=0;i<d;i++)
{
     temp[i]=arr[i];
    
}
for(int i=d;i<size;i++)
{
arr[i-d]=arr[i];
}
for(int i=0;i<d;i++)
{
    arr[size-d+i]=temp[i];
}

}
void print_arr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n =sizeof(arr)/sizeof(arr[0]);
    print_arr(arr,n);
 int d ;
 cout<<"\nEnter value of d";
 cin>>d;
   
    rotate_arr(arr,n,d);
    cout<<"\nAn array after the rotation \n";
    print_arr(arr,n);

return 0;
}