#include <iostream>
using namespace std;

// Selection Sort

void selectionSort(int *arr, int size)
{
    int iterCount = 0, swapCount = 0;
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            iterCount++;

            if (arr[min] > arr[j])
                min = j;
        }
        swap(arr[i], arr[min]);
        swapCount++;
    }
    cout << "The selection sorting was done in " << iterCount << " steps"
         << " and " << swapCount << " swaps" << endl;
}

// Bubble Sort

void bubbleSort(int *arr, int size)
{
    bool swapp;
    int swapCount = 0, iterCount = 0;
    for (int i = 1; i < size; i++)
    {
        bool swapp = 0;
        for (int j = 0; j < size - i; j++)
        {
            iterCount++;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapCount++;
                swapp = 1;
            }
        }
        if (swapp == false)
        {
            break;
        }
    }

    cout << "The bubble sorting was done in " << iterCount << " steps"
         << " and " << swapCount << " swaps" << endl;
}

// Insersion sort

void insersionSort(int *arr, int size)
{
    int iterCount = 0, swapCount = 0;
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j >= 0; j--)
        {
            iterCount++;
            if (temp < arr[j])
            {
                arr[j+1]=arr[j];
                swapCount++;
            }
            else
                break;
        }
        arr[j+1]=temp;
    }
    cout << "The insersion sorting was done in " << iterCount << " steps"
         << " and " << swapCount << " swaps" << endl;
}

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {7, 2, 9, 2, 5, 0, 1};
    int arr2[] = {7, 2, 9, 2, 5, 0, 1};
    int arr3[] = {7, 2, 9, 2, 5, 0, 1};
    int size = sizeof(arr1) / sizeof(int);

    print(arr1, size);
    insersionSort(arr1, size);
    print(arr1, size);
    selectionSort(arr2, size);
    print(arr2, size);
    bubbleSort(arr3, size);
    print(arr3, size);
    return 0;
}