#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n) 
{
    // Write your code here
    int n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;
	int sum=0, arrsum=0;
    for(int i=1;i<n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++){
        arrsum+=arr[i];
    }
    cout<<arrsum<<endl;
    return (arrsum-sum);
}
int main(){
   int arr[]={1,2,3,4,5,3};
   int n=sizeof(arr)/sizeof(int);
   int a=findDuplicate(arr,n);
   cout<<a;
   
}