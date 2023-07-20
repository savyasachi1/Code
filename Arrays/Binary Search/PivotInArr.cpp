// #include <iostream>
// using namespace std;

// int pivot(int arr[], int n)
// {
//     int s = 0, e = n - 1;
//     int mid = (s + e) / 2;
//     while (s <= e)
//     {
//         if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1])
//         {
//             cout << mid << endl;
//             break;
//         }
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//         mid=(s+e)/2;
//     }
// }

// int main()
// {
//     int arr[] = {6, 7, 8, 9, 10, 11, 12, 12, 13, 14, 1, 2, 3, 4, 4, 4, 4, 5};
//     int n = sizeof(arr) / sizeof(int);
//     pivot(arr, n);
// }


#include<iostream>
using namespace std;

int Pivot(int arr[],int n){
    int s=0, e=n-1;
    int mid=(s+e)/2;
    for(;s<=e;mid=(s+e)/2)
    {
        cout<<"Step"<<endl;
        if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1])
        {
            return mid;
        }
        else if(arr[mid]>=arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e=mid;
        }
    }
}

int main(){
    int arr[]={ 7, 8, 9, 1, 2, 3, 5, 6};
    int n=sizeof(arr)/sizeof(int);
    cout<<Pivot(arr,n);
}