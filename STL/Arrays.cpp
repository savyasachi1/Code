#include <iostream>
#include <array>
using namespace std;

void PrintArr(array<int, 5> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    array<int, 5> arr1 = {1, 2, 3, 4, 5};
    array<int, 5> arr2 = {6, 7, 8, 9, 10};
    // int size=arr.size();
    cout << arr1.at(3) << endl;
    cout << arr1.empty() << endl;
    cout << arr1.front() << endl;
    cout << arr1.back() << endl;
    PrintArr(arr1);
    PrintArr(arr2);
    arr1.swap(arr2);
    arr1.fill(3);
    PrintArr(arr1);
    PrintArr(arr2);
    return 0;
}