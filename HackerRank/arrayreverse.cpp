#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    //n is number of inputs in the array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=n;
    for(int i=0;i<a;i++,a--){
        swap(arr[i],arr[a]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}