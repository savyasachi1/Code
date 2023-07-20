#include<iostream>
using namespace std;

int linear(int arr[],int n, int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i+1;
        }
    }    
}
int main(){
    int arr[5]={2,4,5,8,1};
    int n=5;
    int num;
    cin>>num;
    int i=linear(arr,n,num);
    cout<<i;
}