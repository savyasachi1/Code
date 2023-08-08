#include<iostream>
#include<algorithm>
using namespace std;

void print(int* arr, int n){
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool isPlaindrome(int n){
    int temp = 0;
    int check = n;
    while(n!=0){
        int a = n%10;
        temp = temp*10+a;
        n = n/10;
        // cout<<n<<" "<<temp<<endl;
    }
    if(check==temp)
        return true;
    return false;
}

int main(){
    int arr[]= {1, 121, 55551, 545545, 10111, 90, 454667, 2335, 10001, 2131312, 45454};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    sort(arr, arr+n);
    print(arr,n);
    isPlaindrome(arr[3]);
    for( int i=n-1;i>=0;i--){
        if(isPlaindrome(arr[i])){
            cout<<"answer- "<<arr[i]<<endl;
            // break;
        }
    }
}