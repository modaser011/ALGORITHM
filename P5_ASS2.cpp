#include <iostream>

using namespace std;
#include<vector>
int main()
{
    int tt=0,pp=0,ii = 0, jj= 0,sum=0;
   int n,k;
   cin>>n>>k;
   char*arr=new char[n];
   for(int i=0;i<n;i++)
    cin>>arr[i];
      for(int i=0;i<n;i++)
{
    if(arr[i]=='P')
        pp++;
        if(arr[i]=='T')
         tt++;
}
vector<int>t(tt);
vector<int>p(pp);
for (int i = 0; i < n; i++) {
        if (arr[i] == 'P')
            p.emplace_back(i);
        else if (arr[i] == 'T')
            t.emplace_back(i);
    }
while (ii < tt && jj < pp) {
         if (((t[ii] - p[jj]) <= k)||((p[jj]-t[ii]) <= k)) {
            sum++;
            ii++;
            jj++;
        }
         else if (t[ii] < p[jj])
           {
              ii++;
           }
        else
        {
            jj++;
        }

    }
    cout<<sum<<endl;
}
