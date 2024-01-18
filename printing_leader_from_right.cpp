#include<iostream>
using namespace std;
void print_led(int arr[],int size)
{
    int curr_led=arr[size-1];
    cout<<curr_led;
    for(int i=size-2;i>=0;i--)
    {
        if(arr[i]>curr_led)
        {
            curr_led=arr[i];
            cout<<"  "<<curr_led;
        
        }
    }
    cout<<"\n\n";
}
int main()
{
    int arr[]={11,11,1,1,1,1,4,4,34,33,34,7,8,9,5,4,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    print_led(arr,size);
    return 0;
}