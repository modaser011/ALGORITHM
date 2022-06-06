#include <iostream>
#include<unordered_set>
using namespace std;
int main()
{ int n,target,x=0;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    cin>>target;
   unordered_set<int>s;
   int j=0;
    for (int i=0;i<n;i++)
    {
         x=target-arr[i];
        if (s.find(x)!=s.end())
            {
                if (j!=0)
                cout<<"OR ";
                cout<<"Pair found "<<"("<<x<<","<<arr[i]<<")"<<" ";
                j++;
            }
        else
        s.emplace(arr[i]);
    }
    if (j==0)
    cout<<"Pair not found\n";
}