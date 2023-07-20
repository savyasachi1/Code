#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[], int n)
{
    int a = 0;
    int occ[]={0};
    // int n=sizeof(arr)/sizeof(int);
    for (int j = 0; j < n; j++)
    {
        // int b=arr[j];
        for (int i = 0; i < n; i++)
        {
            if (arr[j]==arr[i]){
                occ[j]++;
            }
        }
       
    }
    int f=sizeof(occ)/sizeof(int);
    for(int i=0;i<f;i++){
        cout<<occ[i]<<"   ";
    }
}

int main()
{
    int n = 11;
    int arr[] = {5, 3, 5, 5, 1, 3, 3, 7, 3, 1, 3};
    uniqueOccurrences(arr, n);
    // cout << a;
}