#include<iostream>
#include<algorithm>
using namespace std;
  class Job
{
   char id;
   int deadline;
   int profit;

   public:
       Job(char ID,int Deadline,int Profit)
       {
          id=ID;
           deadline=Deadline;
           profit=Profit;
       }
   Job()
   {
   }

   void setid(char ID)
   {
       id=ID;
   }
   void setdeadline(int dead)
   {
       deadline=dead;
   }
      void setprofit(int Profit)
   {
       profit=Profit;
   }
   char getid()
   {
       return id;
   }
   int getdeadline()
   {
       return deadline;
   }
    int getprofit()
   {
       return profit;
   }
};

   void bubbleSort(Job arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
         for (j = 0; j < n-i-1; j++)
        if (arr[j].getprofit() < arr[j+1].getprofit())
            swap(arr[j], arr[j+1]);
}

  void printJobScheduling(Job arr[], int n)
{
    bubbleSort(arr, n);

    int *res=new int[n];
    bool *s=new bool[n];
      for (int i=0; i<n; i++)
       {
           s[i] = false;
       }
      for (int i=0; i<n; i++)
    {
       for (int j=min(n, arr[i].getdeadline())-1; j>=0; j--)
       {
          if (s[j]==false)
          {
             res[j] = i;
             s[j] = true;
             break;
          }
       }
    }
      for (int i=0; i<n; i++)
       if (s[i])
         cout << arr[res[i]].getid() << " ";
}
int main()
{
/*

    int dead,profit;
    char id;
   int n ;
   cin>>n;
   Job *arr=new Job[n];
   for(int i=0;i<n;i++)
    {
        cin>>id>>dead>>profit;
        arr[i].setid(id);
        arr[i].setdeadline(dead);
        arr[i].setprofit(profit);
    }
   printJobScheduling(arr,n);
   cout<<endl;
*/
   Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},{'d', 1, 25}, {'e', 3, 15}};
   int n = sizeof(arr)/sizeof(arr[0]);
   printJobScheduling(arr, n);
}