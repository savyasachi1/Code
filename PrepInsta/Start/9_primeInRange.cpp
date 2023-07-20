#include <iostream>
using namespace std;

bool check(int num){
    if(num==2||num==1){
        return true;
    }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int start, end;
    cout<<"Enter the range : ";
    cin>>start>>end;
    for(int i=start;i<=end;i++){
        if(check(i)){
            cout<<i<<" ";
        }
    }
}