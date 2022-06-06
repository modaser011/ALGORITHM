#include<iostream>
#include<algorithm>
using namespace std;
   class Task
{
    int bigen;
    int end;


 public:
     Task()
     {

     }
      Task(int b,int e)
    {
         bigen=b;
         end=e;
    }
    void setbigen(int b)
    {
        bigen=b;
    }
    void setendt(int e)
    {
        end=e;

        }
    int getbegin()
    {
        return bigen;
    }
    int getend()
    {
        return end;
    }
};
   void bubbleSort(Task arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
         for (j = 0; j < n-i-1; j++)
        if (arr[j].getend() > arr[j+1].getend())
            swap(arr[j], arr[j+1]);
}
   void maxy(Task task[], int n)
    {
   bubbleSort(task,  n);
      int i = 0,x=0;
   cout << "{" <<task[i].getbegin() << "," << task[i].getend()<<"}" ;
   for (int j = 1; j < n; j++)
    {
      if (task[j].getbegin() >= task[i].getend()) {
            if (x!=1)
                cout<<",";
   cout << "{" <<task[j].getbegin() << "," << task[j].getend()<<"}" ;
         i = j;

      }
                  x++;
   }

}
int main() {
   Task Arr[] = {{1, 4}, {3, 5}, {0, 6}, {5, 7}, {3, 8}, {5, 9}, {6, 10}, {8, 11}, {8, 12}, {2, 13}, {12, 14}};
   int n = sizeof(Arr)/sizeof(Arr[0]);
   maxy(Arr,n);
  /*int start,finish;
   int n ;
   cin>>n;
   Task *arr=new Task[n];
   for(int i=0;i<n;i++)
    {
        cin>>start>>finish;
        arr[i].setbigen(start);
        arr[i].setendt(finish);
    }
   maxy(arr,n);
   cout<<endl;*/
   }
