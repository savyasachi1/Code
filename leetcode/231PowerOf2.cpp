#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){
            cout<<" false";
        }
        while(n!=0){
            if(n==1){
                cout<<" true";
                break;
            }
            else if(n%2!=0){
                cout<<" false";
                break;
            }
            else{
                n=n/2;
            }
        }
        cout<<" true";
    }
