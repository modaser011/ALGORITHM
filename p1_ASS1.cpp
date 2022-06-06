#include <iostream>

using namespace std;
void insertionSort(int arr[], int n){
    int key;
    int s=0;
    for(int i = 1; i < n; i++){
        key = arr[i];
        int j = i;

        while(j >= 1 && arr[j - 1] > key){
            arr[j] = arr[j - 1];
            j--;
            s++;
        }

        arr[j] = key;
    }
    cout<<s<<endl;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for (int l = 0; l < n; l++)
    {
        cin>>arr[l];
    }
    insertionSort(arr,n);
}