#include<iostream>
using namespace std;

void print(int* arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int* arr, int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i;j>=0;j--){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
    }
    cout<<count<<endl;
}

void insersionSort(int arr[], int n)
{
    int count=0;
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
                count++;
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    cout<<count<<endl;
}

int main(){
    int arr[]={ 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n=sizeof(arr)/sizeof(int);
    print(arr,n);
    int arr2[]={ 9, 8, 7, 6, 5, 4, 3, 2, 1};
    insersionSort(arr, n);
    print(arr, n);
    bubbleSort(arr2,n);
    print(arr2, n);

}