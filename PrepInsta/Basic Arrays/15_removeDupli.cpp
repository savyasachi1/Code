#include<iostream>
using namespace std;

void remove(int *arr, int n, int k){
    for(int i = k;i<n-1;i++){
        arr[i]=arr[i+1];
    }
}

void print(int* arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={ 1, 2, 7, 3, 4, 5, 6, 1, 2, 3, 7, 7, 3, 2};
    int n = sizeof(arr)/sizeof(int);
    print(arr, n);
    cout<<n<<endl;
    for( int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                remove(arr, n, j);
                n--;
                j--;
            }
        }
    }
    print(arr,n);
    cout<<n<<endl;
}


// #include <iostream>
// using namespace std;

// int duplicates(int arr[], int n)
// {
//     if (n == 0 || n == 1)
//         return n;

//     int j = 0;

//     for (int i = 0; i < n - 1; i++)
//         if (arr[i] != arr[i + 1])
//             arr[j++] = arr[i];

//     arr[j++] = arr[n - 1];

//     return j;
// }

// // Driver code
// int main()
// {
//     int arr[] = {10, 20, 20, 30, 40, 40, 40, 40, 50, 50};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     n = duplicates(arr, n);
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     return 0;
// }