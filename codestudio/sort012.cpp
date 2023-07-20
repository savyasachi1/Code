#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// void sort012(int *arr, int n)
// {
//     //   Write your code here
//     int i = 0, j = n - 1;
//     while (i < n - 1)
//     {
//         if (arr[i] <= arr[i + 1])
//         {

//             cout << "small " << arr[i] << " " << arr[i + 1] << endl;
//             i++;
//         }
//         else
//         {
//             cout << "big ws " << arr[i] << " " << arr[i + 1] << endl;
//             swap(arr[i], arr[i + 1]);
//             cout << "big as " << arr[i] << " " << arr[i + 1] << endl;
//             i = 0;

//             // }
//             // if(arr[j]>arr[j-1]){
//             //     j--;
//             // }else{
//             //     swap(arr[j],arr[j-1]);
//             //     j--;
//         }
//     }

void sort012(int *arr, int n)
{
    //   Write your code here
    int j = 0;
    int step=0;
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i] == 0)
        {
            cout<<"step-"<<step<<endl;
            step++;
            cout<<"Before swap  j="<<j<<"- "<<arr[j]<<"  i="<<i<<"- "<<arr[i]<<endl;
            swap(arr[j], arr[i]);
            cout<<"After  swap  j="<<j<<"- "<<arr[j]<<"  i="<<i<<"- "<<arr[i]<<endl;
            j++;
        }
    }
    for (int i = j; i < n; i++)
    {
        
        if (arr[i] == 1)
        {
            cout<<"step-"<<step<<endl;
            step++;
            cout<<"Before swap  j="<<j<<"- "<<arr[j]<<"  i="<<i<<"- "<<arr[i]<<endl;
            swap(arr[j], arr[i]);
            cout<<"After  swap  j="<<j<<"- "<<arr[j]<<"  i="<<i<<"- "<<arr[i]<<endl;
            j++;
        }
    }
}

int main()
{
    int arr[] = {0, 2, 1, 2, 1, 0};
    int n = sizeof(arr) / sizeof(int);
    sort012(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}