#include<iostream>
using namespace std;

int print(int n){
    if(n==0)
        return 0;
    
    print(n-1);
    cout<<n<<" ";
    return 0;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    print(n);
}