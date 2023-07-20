#include <iostream>
#include <math.h>
#define INT_MAX 2147483647
using namespace std;

void find2ndSmall(int *arr, int n)
{
    int first = INT_MAX;
    int second = first;
    for (int i = 0; i < n; i++)
    {
        if(first>arr[i]){
            second=first;
            first=arr[i];
        }
    }
    cout<<second;
}

int main()
{
    int n;
    cout << "Enter the number of elements :";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    find2ndSmall(arr, n);
}