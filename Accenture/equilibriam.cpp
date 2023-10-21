#include<iostream>
using namespace std;

int main()
{
    int arr[]={8, 8, 6, 2, 2, 2, 4, 6, 3, 5};
    int n = 9;
    int i=1, j = 7;
    int leftSum = arr[0], rightSum = arr[8];
    while(i<=j){
        if(leftSum>rightSum)
            rightSum+=arr[j--];
        else
            leftSum+=arr[i++];
    }
    cout<<arr[i]<<"Index = "<<i;
    return 0;
}