#include<iostream>
using namespace std;

int ldr(int arr[], int n){
    int sum=arr[n-1];
    cout<<"("<<arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
            cout<<"+"<<arr[i];
            sum+=arr[i];
        }
    }
    cout<<"=)";
    return sum;
}

int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int result=ldr(arr,n);
    cout<<result;
}