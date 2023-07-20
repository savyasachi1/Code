#include <iostream>
using namespace std;

int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            //cout<<max<<endl;
        }
    }
    return max;
}
int min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            //cout<<min<<endl;
        }
    }
    return min;
}
int maxi(int arr[], int n){
    int maxim=arr[0];
    for(int i=0;i<n;i++){
    maxim=max(maxim,arr[i]);
    }
    return maxim;
}
int main()
{
    int arr[5] = {23, 54, 12, 65, 34};
    int n = 5;
    int maximum = maxi(arr, n);
    int minimum = min(arr, n);
    cout << maximum << "    " << minimum;
}