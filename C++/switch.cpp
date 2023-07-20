#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // int n=2;
    // while(n){
    //     switch(n){
    //         case 1:{
    //             cout<<"a";
    //             exit;
    //         }
    //         case 2:{
    //             cout<<"b";
    //             exit(0);
    //         }
    //         default: {
    //             cout<<"Default";
    //             exit;
    //         }
    //     }
    // }
    int amount;
    cout<<"Enter the amount"<<endl;
    cin>>amount;
    int rs100, rs50, rs20, rs1;
    int n=1;
    switch(n){
        case 1: rs100=amount/100;
          amount=amount%100;
          cout<<rs100<<endl;
        case 2: rs50=amount/50;
          amount=amount%50;
          cout<<rs50<<endl;
        case 3: rs20=amount/20;
          amount=amount%20;
          cout<<rs20<<endl;
        case 4: rs1=amount/1;
          amount=amount%1;
          cout<<rs1<<endl;
    }

}