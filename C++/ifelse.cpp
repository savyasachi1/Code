#include<iostream>
using namespace std;

int main() {
//    int a, b;
//	cout<<"Enter two numbers"<<endl;
//	cin>>a>>b;
//	if(a<b){
//		cout<<b;
//	}
//	else{
//		cout<<a;
//	}
//	int a;
//	cout<<"Enter the number"<<endl;
//	cin>>a;
//	if(a>0) {
//		cout<<"Number is positive";
//	} else if(a<0) {
//		cout<<"Number is negative";
//	}else {
//		cout<<"Number is 0";
//	}
    char a;
    int b;
    cout<<"Enter the character"<<endl;
    cin>>a;
    b=a;
    cout<<b<<endl;
    if (a>=97 && a<=122){
    	cout<<"It is lowercase";
	}else if(a>=65 && a<=90){
		cout<<"It is uppercase";
	}else{
		cout<<"It is a number";
	}
	return 0;
}