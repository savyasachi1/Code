#include<iostream>
using namespace std;

int reverse(int arr[],int n){
    // int temp=0;
    for(int i=0;i<n;i++,n--){
        swap(arr[i],arr[n-1]);
        // n--;
        // temp =arr[i];
        // cout<<temp<<"-temp "<<endl;
        // arr[i]=arr[n-1];
        // cout<<arr[i]<<" i "<<i<<endl;
        // arr[n-1]=temp;
        // cout<<arr[n-1]<<" n "<<n-1<<endl;
        // --n;
    }

} 

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    reverse(arr,n);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"  ";
    }
}