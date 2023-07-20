#include<iostream>
using namespace std;

int FindUnique(int *arr,int size){
    int unique=0;
    for(int i=0;i<size;i++){
        unique=unique^arr[i];
    }
    return unique;
}


int findUnique(int *arr, int size)
{
    //Write your code here
    int unique;
    int a=0, b=0;
    for(int i=0;i<size;i++){
        // cout<<a;
        a=arr[b];
        if(i==b){
            continue;
        }
        cout<<a<<"  "<<i<<"th term"<<"  "<<arr[i]<<endl;
        if(a==arr[i]){
            b++;
            i=-1;
        }
        
    }
    return a;
}
int main(){
    // int a;
    // cin>>a;
    int n=11;
    int arr[]={5,3,1,5,1,3,4,7,4,8,8};
    int a=FindUnique(arr,n);
    cout<<a;
    // for(int i=1;i<=a;i++){
    //     int n;
    //     cin>>n;
    //     int arr[n];
    //     for(int j=0;j<n;j++){
    //         cin>>arr[j];
    //     }
    //     int unique=findUnique(arr,n);
    //     cout<<unique;
    // }

}