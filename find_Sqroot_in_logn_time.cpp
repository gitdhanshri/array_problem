#include<iostream>
using namespace std;
int root_of_num(int x)
{
int res=-1, low=1,high=x;
while(low<=high){
int mid=(low+high)/2;
int root=mid*mid;
if(root==x)
	{
	return mid;
	}
else if(root>x)
	{
	high=mid-1;
	
	}
else
	{
	low=mid+1;
	res=mid;
	}
}
return res;
}
int main()
{
int x=21;
int root = root_of_num(x);
cout<<"Root of given number is --"<<root;
return 0;
}
