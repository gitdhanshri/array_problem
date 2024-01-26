#include<iostream>
using namespace std;
int sum_index(int arr[],int size,int target){
int index_sum=0;
		for(int i=0;i<size;i++)
 		  {
			for(int j=i+1;j<size;j++)
			   {
				if(arr[i]+arr[j]==target)
					{
					index_sum=i+j;
					cout<<"first index"<<i;
					cout<<"\n";
					cout<<"second index"<<j;
					break;
					}
}
}

return index_sum;
}
int main()
{
int arr[]={2,7,11,15};
int size=sizeof(arr)/sizeof(arr[0]);
int index=sum_index(arr,size,18);
cout<<"\nSum of indices which is equal to target"<<index;
return 0;
}

