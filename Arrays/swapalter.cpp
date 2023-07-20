#include<iostream>
using namespace std;

int swapalter(int arr[],int n){
    for(int i=0;i<n;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    swapalter(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}