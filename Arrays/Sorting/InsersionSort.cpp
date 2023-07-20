#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void insersionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {6, 7, 5, 7, 4, 6, 3, 23, 34, 23, 45, 57, 53, 23, 3, 2, 8, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    printarray(arr, n);
    insersionsort(arr, n);
    printarray(arr, n);
}