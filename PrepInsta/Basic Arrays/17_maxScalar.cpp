#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr1[] = { 2, 7, 4, 1, 9, 3};
    int arr2[] = { 2, 7, 4, 1, 9, 3};
    int n = sizeof(arr1)/sizeof(int);
    sort(arr1, arr1+n);
    sort(arr2, arr2+n);
    int product =0;
    for( int i=0;i<n;i++){
        cout<< arr1[i]*arr2[i]<<" ";
        product += arr1[i]*arr2[i];
    }
    cout<<endl<<product<<endl;
    return 0;
}