#include<iostream>
using namespace std;

void doublle(int arr[], int n)
{
    for(int i=0;i<n;i++){
        *(arr+i)=2*(*(arr+i));
    }
}

void print(int* arr, int n)
{
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<"  ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    print(arr,size);
    
    doublle(arr,size);
    print(arr,size);
}