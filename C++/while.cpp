#include<iostream>
using namespace std;

int main(){
	
//	int a=2, sum=0, n;
//	cout<<"Enter the number"<<endl;
//	cin>>n;
//	while(a<n){
//		
//		sum=sum+a;
////		a++;
//		a+=2;	
//	}
//	cout<<sum;

//    int a;
//    cin>>a;
//    a=(a-32)*5/9;
//    cout<<a;
    
    int a;
    int b=2;
    cout<<"Enter the number"<<endl;
    cin>>a;
    while(b<a){
//    	cout<<b<<" ";
    	if(a%b==0){
    		cout<<"This is not prime";
    		break;
		}else{
			b++;
		}
		if(b==a){
			cout<<"this is prime";
			break;
		}
	}
	
	return 0;
}
