#include <iostream>
using namespace std;

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *arr, int start, int end)
{

    int mid = (start + end) / 2;

    int size1 = mid - start + 1;
    int size2 = end - mid;
    int *temp1 = new int[size1];
    int *temp2 = new int[size2];

    int index = start;
    for (int i = 0; i < size1; i++)
    {
        temp1[i] = arr[index++];
    }
    for (int i = 0; i < size2; i++)
    {
        temp2[i] = arr[index++];
    }

    int index1 = 0, index2 = 0;
    index = start;
    while (index1 < size1 && index2 < size2)
    {
        if (temp1[index1] < temp2[index2])
            arr[index++] = temp1[index1++];
        else
            arr[index++] = temp2[index2++];
    }

    while (index1 < size1)
    {
        arr[index++] = temp1[index1++];
    }
    while (index2 < size2)
    {
        arr[index++] = temp2[index2++];
    }
}

void mergeSort(int *arr, int start, int end)
{

    if (start >= end)
        return;

    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, end);
}

int main()
{
    int arr[] = {45, 65, 23, 87, 12, 34, 90, 34, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    print(arr, size);
    mergeSort(arr, 0, size - 1);
    print(arr, size);
    return 0;
}