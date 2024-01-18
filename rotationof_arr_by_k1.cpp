// #include<iostream>
// using namespace std;
// void print_arr(int arr[],int size)
// {

//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<"   ";
//     }
// }
// void rotation_of_arr(int arr[],int size)
// {
   
// int m =arr[0];
//     int i=0;
//     while( i<size-1)
//     {
//         arr[i]=arr[i+1];
//             i++;
//     }
//     arr[size-1]=m; 
// }
// int main(){
//     int arr[]={11,12,13,14,15,16,17,18};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<"\nArray before Rotation :->";
//     print_arr(arr,size);
//     cout<<"\n";
//     int d;
//     cout<<"\nEnter the number of times u have to rotates an array :->";
//     cin>>d;
//     for(int i=0;i<d;i++)
//     {
//         // rotation_of_arr(arr,size);
//         // rotation_of_arr(arr,size);
//                 rotation_of_arr(arr,size);

//     }
// cout<<"\nAn arary after rotation\n";
//    print_arr(arr,size);
// cout<<"\n";
// return 0;
//      }

#include<iostream>
using namespace std;
void print_arr(int arr[],int size)
{

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
}
void rotation_of_arr(int arr[],int size)
{
   
int m =arr[0];
    int i=0;
    while( i<size-1)
    {
        arr[i]=arr[i+1];
            i++;
    }
    arr[size-1]=m; 
}
void n_time_rotation(int arr[],int size,int d)
{
   for(int i=0;i<d;i++)
   {
     rotation_of_arr(arr,size);
   } 
}
int main(){
    int arr[]={11,12,13,14,15,16,17,18};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nArray before Rotation :->";
    print_arr(arr,size);
    cout<<"\n";
    int d;
    cout<<"\nEnter the number of times u have to rotates an array :->";
    cin>>d;
    n_time_rotation(arr,size,d);
  
cout<<"\nAn arary after rotation\n";
   print_arr(arr,size);
cout<<"\n";
return 0;
     }
