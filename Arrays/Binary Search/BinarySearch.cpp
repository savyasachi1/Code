#include <iostream>
using namespace std;

int BinaryS(int arr[], int n, int search)
{
    int s = 0, e = n - 1;
    int a = (s + e) / 2;
    while (s <= e)
    {
        // if element is found
        if (arr[a] == search)
        {
            return a;
        }
        // if element is smaller then the searched number
        if (arr[a] < search)
        {
            s = a + 1;
        }
        // if element is greater then the searched number
        else if (arr[a] > search)
        {
            e = a - 1;
        }
        a = (s + e) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int n = sizeof(arr) / sizeof(int);
    int search = 15;
    cout << BinaryS(arr, n, search);
}