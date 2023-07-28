#include<iostream>
using namespace std;

bool palin(int num){
    int digit=0;
    int number=num;
    int newnum=0;
    while(number!=0){
        digit=number%10;
        newnum=(newnum*10)+digit;
        number=number/10;
        

    }
    return (newnum==num);
}

int main(){
    int num;
    cin>>num;
    cout<<palin(num);
    return 0;
}