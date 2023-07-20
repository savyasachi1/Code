#include <iostream>
using namespace std;

bool Possible(int arr[], int n, int m, int mid)
{
    int count = 1;
    int check = 0;
    for (int i = 0; i < n; i++)
    {

        if (check + arr[i] <= mid)
        {
            check += arr[i];
        }
        else
        {
            count++;
            if (count > m|| arr[i]>mid)
            {
                return false;
            }
            check= arr[i];
        }
    }
    return true;
}

int MinimumSolution(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans=-1;
    int e = sum;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (Possible(arr, n, m, mid))
        {
            ans=mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(int);
    int m = 2;
    cout << MinimumSolution(arr, n, m);
}