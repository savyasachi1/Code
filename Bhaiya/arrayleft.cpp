#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // int arr[]={0,1,2,3,4,5};
    // int a = 0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int n=sizeof(arr)/sizeof(int);
    // cout<<n<<endl;
    int a=arr[0];
    // arr[n-1]=arr[0];
    // cout<<arr[n-1]<<endl;
    for(int i=0;i<n-1;i++){
        // cout<<arr[i]<<"     ";
        arr[i]=arr[i+1];
        // cout<<i<<"th  - "<<arr[i]<<endl;
    }
    arr[n-1]=a;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}