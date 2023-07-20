#include<iostream>
using namespace std;
int peakIndexInMountainArray(int arr[], int n) {
        int s=0, e=n-1;  
        int mid=(s+e)/2;
        cout<<mid<<endl;
        while(s<=e){
            cout<<"step 1"<<endl;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
                cout<<"e  "<<e<<endl;
            }else if(arr[mid]>arr[mid+1]){
                e=mid-1;
                cout<<"s  "<<s<<endl;
            }
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                break;
            }
            mid=(s+e)/2;
        }
        
        cout<< mid;
    }
    int main(){
        int arr[]={1,2,3,4,5,6,7,3,2,1};
        int n= sizeof(arr)/sizeof(int);
        peakIndexInMountainArray(arr,n);
        return 0;
    }