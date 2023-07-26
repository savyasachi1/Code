#include<iostream>
using namespace std;

void selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
           if(arr[min]>arr[j]){
            min=j;
           }
        }
        swap(arr[min],arr[i]);
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements:-";
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Entered array is:-"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl<<"Sorted array is:-"<<endl;
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}