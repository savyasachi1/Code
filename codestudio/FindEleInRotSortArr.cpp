#include<iostream>
using namespace std;

int Pivot(int arr[],int n){
    int s=0, e=n-1;
    int mid=(s+e)/2;
    for(;s<=e;mid=(s+e)/2)
    {
        // cout<<"Step"<<endl;
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
int BinaryS(int arr[],int pivot, int n, int search)
{
    int s = pivot, e = n - 1;
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
int findPosition(int arr[], int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=Pivot(arr,n);
    int result;
    if(arr[n-1]>=k){
        result=BinaryS(arr,pivot,n,k);
    }
    else{
        result=BinaryS(arr,0,pivot,k);
    }
    return result;
}
// int findPosition(int arr[], int n, int k)
// {
//     // Write your code here.
//     // Return the position of K in ARR else return -1.
//     int s=0, e=n-1;
//     int mid=(s+e)/2;
//     for(;s<=n;mid=(s+e)/2)
//     {
//         if(arr[mid]<arr[mid+1]&& arr[mid]<arr[mid-1])
//         {
//             break;
//         }
//         else if(arr[mid]>=arr[0])
//         {
//             s=mid+1;
//         }else
//         {
//             e=mid;
//         }
//     }
//     if(arr[n-1]<=k && arr[mid]>=k){ 
//         s=mid;
//         e=n-1;
//     }
//     else{
//         s=0;
//         e=mid-1;
//     }
//     mid=(s+e)/2;
    
//     for(; s<=e; mid=(s+e)/2)
//     {
//         if(arr[mid]==k){
//             return mid;
//         }
//         else if(arr[mid]<k){
//             s=mid+1;
//         }else{
//             e=mid-1;
//         }
//     }
//     return -1;
// }

int main(){
    int arr[]={2, 4, 5, 6, 8, 9, 1};
    int n=sizeof(arr)/sizeof(int);
    cout<<findPosition(arr,n,9);
}
