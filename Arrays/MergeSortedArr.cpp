#include <iostream>
using namespace std;

void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void MergeArr(int arr1[], int n, int arr2[], int m, int arr3[], int p)
{
    int i = 0, j = 0;
    int s = 0;
    int e = p;
    while (s < e)
    {
        if (arr1[i] > arr2[j])
        {
            arr3[s] = arr2[j];
            s++;
            j++;
        }
        else if (arr2[j] > arr1[i])
        {
            arr3[s] = arr1[i];
            s++;
            i++;
        }
        else{
            arr3[s] = arr1[i];
            s++;
            i++;
        }
        if (i == n)
        {
            for (int a = j; a < m; a++)
            {
                arr3[s] = arr2[a];
                s++;
            }
        }
        else if (j == m)
        {
            for (int a = i; a < n; a++)
            {
                arr3[s] = arr1[a];
                s++;
            }
        }
    }
}

    int main()
    {
        int arr1[] = {1, 3, 5, 7, 9, 10, 13, 15, 18, 19};
        int n = sizeof(arr1) / sizeof(int);
        int arr2[] = {2, 4, 6, 8, 13};
        int m = sizeof(arr2) / sizeof(int);
        int arr3[m + n] = {0};
        PrintArr(arr1, n);
        PrintArr(arr2, m);
        MergeArr(arr1, n, arr2, m, arr3, m + n);
        PrintArr(arr3, m + n);
        return 0;
    }