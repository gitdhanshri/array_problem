#include<iostream>
using namespace std;
int s_root(int x)
{
    int low=0,high=x,res=-1;
    while(low<=high){
   int mid=(low+high)/2;
   int root=mid*mid;
            if(root==x)
            {
                return mid;
            }
                        else if(root>x){

                        high=mid-1;
                        }
            else{
                low=mid+1;
                res=mid;
            }
   }
return -1;
}
int main()
{
    int x;
    x=441;
    int root=s_root(x);
    cout<<"\nRoot of x is -->"<<root;
    cout<<"\n\n";
    return 0;
}