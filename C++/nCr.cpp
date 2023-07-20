#include<iostream>
#include<math.h>
using namespace std;

int factorial(int a){
    int b=1;
    for(int i=a;i>1;i--){
        b=b*i;
    }
    cout<<b<<endl;
    return b;
}

int nCr(int n, int r){
    int nf=factorial(n), rf= factorial(r), nrf=factorial(n-r);
    float ans=(nf/(rf*nrf));
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter the value of n and r ";
    cin>>a>>b;
    float answer= nCr(a,b);
    cout<<answer;
}