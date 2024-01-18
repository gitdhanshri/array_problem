#include<iostream>
using namespace std;
//for printing an array
void print_arr(int arr[],int size)
{

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
}
//Swapping an array elements
void rotate(int arr[],int size)
{
  int i=0;

    int m =arr[0];
    while( i<size-1)
    {
        arr[i]=arr[i+1];
            i++;
    }
    arr[size-1]=m;  
    
}
//By how many times we have to rotates an array
void rotation_byk(int arr[],int size,int k)
{
    for (int i=0;i<k;i++){
        rotate(arr,size);
    }
}
int main(){
    int arr[]={11,12,13,14,15,16,17,18};
    int size=sizeof(arr)/sizeof(arr[0]);
    print_arr(arr,size);
    cout<<"\n";
    int k;
    cout<<"\nEnter value of k ,that how many times we have to rotates an array->";
    cin>>k;
    cout<<"\n";
    rotation_byk(arr,size,k);
    cout<<"\nAfter rotation\n";
    print_arr(arr,size);

    cout<<"\n";
    return 0;
     }
//output:11   12   13   14   15   16   17   18   

// Enter value of k ,that how many times we have to rotates an array->3
// After rotation
// 14   15   16   17   18   11   12   13 

