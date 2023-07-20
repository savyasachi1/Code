#include<iostream>
using namespace std;

int sum(int start, int end){
    int sum=0;
    for(int i=start;i<=end;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int start, end;
    cout<<"Enter the number to start :";
    cin>>start;
    cout<<"Enter the number to end :";
    cin>>end;
    cout<<"The num of Numbers Are "<<sum(start, end);
}