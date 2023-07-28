#include<iostream>
using namespace std;

int factorial(int n){

    if(n==0){
        return 1;
    }

    // int chhoti = factorial(n-1);
    // int badi=n*chhoti;

    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    int fact = factorial(n);
    cout<<fact<<endl;
}