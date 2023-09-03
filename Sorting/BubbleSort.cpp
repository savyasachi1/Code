#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort(int arr[], int n)
{
    bool swapp;
    for (int i = 1; i < n; i++)
    {
        swapp=false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapp=true;
                // cout<<"Swapped "<<j<<" "<<j+1<<endl;
            }
        }
        if(swapp==false){
            break;
        }
    }
}

int main()
{
    int arr[] = {10,2,10,10,10,10,8,2,7,8};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);
    BubbleSort(arr, n);
    printArr(arr, n);
}