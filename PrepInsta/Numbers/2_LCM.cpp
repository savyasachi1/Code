#include <iostream>
using namespace std;

int findLCM( int a, int b){
    int num;
    num=(a<b)?a:b;
    for(int i = num;i<a*b;i+=num){
        if(i%a==0&&i%b==0)
            return i;
    }
    return a*b;
}

int main(){
    int a, b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    cout<<"The lcm of "<<a<<" and "<<b<<" is "<<findLCM(a, b);
}