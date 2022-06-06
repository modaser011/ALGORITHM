#include <iostream>
#include <unordered_set>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
      int min=-1;
     unordered_set<int>s;
     for (auto j=(n-1);j>=0;j--)
    {
        if (s.find(arr[j])!= s.end())
            min = j;
        else   
            s.emplace(arr[j]);
    }
     if (min!=-1)
        cout<<"The minimum index of the repeating element is "<<min<<endl;
    else
        cout<<"Invalid Input\n";
 }