#include<iostream>
using namespace std;
int sum_index(int arr[],int size,int target){
int index_sum=0;
		for(int i=0;i<size;i++)
 		  {
			if(arr[i]+arr[i+1]==target)
			{
			index_sum=i+(i+1);
					cout<<"index of first element "<<i;
					cout<<"\n";
					cout<<"index of second element  "<<i+1;
					//return index_sum;
					return 1;
			}
		
		
		}//return index_sum;
		cout<<"\nNot found";
	return -1;
}
int main()
{
int arr[]={2,7,11,15};
int size=sizeof(arr)/sizeof(arr[0]);
int index=sum_index(arr,size,18);
//cout<<"\nSum of indices which is equal to target"<<index;
cout<<"\nResult->"<<index;
cout<<"\n";
return 0;
}

