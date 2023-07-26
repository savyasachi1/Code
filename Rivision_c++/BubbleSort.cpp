#include<iostream>
using namespace std;

void print(int* arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int* arr, int n){
    bool swapp=false;;
    for(int i=0;i<n-1;i++){
        swapp=false;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapp=true;
            }
        }
        if(swapp==false){
            break;
        }
    }
}

int main(){
    int arr[]={ 2, 6, 8, 5, 1, 9, 3};
    int n = sizeof(arr)/sizeof(int);
    print(arr,n);
    bubbleSort(arr,n);
    print(arr,n);
}