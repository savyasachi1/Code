#include <iostream>
using namespace std;

void occurrence(int *arr, int n)
{
    int *visited = new int[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i] > 0)
        {
            continue;
        }
        else
        {
            cout <<arr[i] << " - ";
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    visited[j]+=1;
                }
            }
            cout<<count << endl;
        }
        
    }
}

int main()
{
    int arr[] = {12, 23, 45, 34, 12, 12, 45, 34, 
    65, 34, 45, 88, 99};
    int n = sizeof(arr) / sizeof(int);
    occurrence(arr, n);
}