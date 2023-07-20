#include <iostream>
using namespace std;

int main()
{
	// printing square pattern
	//	int n, a = 1, b = 1, c = 1;
	//	cout<<"Enter number"<<endl;
	//	cin>>n;
	//	while(a<=n){
	//		while(b<=n){
	//			cout<<c<<" ";
	//			b++;
	//			c++;
	//		}
	//		b = 1;
	//		cout<<endl;
	//		a++;
	//	}

	// printing triange pattern
	// int n, a=1, b=1, c=1;
	// cout<<"Enter number"<<endl;
	// cin>>n;
	// while(a<=n){
	// 	while(b<=a){
	// 		cout<<c<<" ";
	// 		b++;
	// 		c++;
	// 	}
	// 	c=a+1;
	// 	b=1;
	// 	cout<<endl;
	// 	a++;
	// }
	// printing reverse triangle pattern
	// int n, a = 1, b = 1, c = 0, i = 0;
	// cout << "Enter the number" << endl;
	// cin >> n;
	// while (i <= n)
	// {
	// 	c = c + i;
	// 	i++;
	// }
	// cout << c << endl;
	// b= n;
	// while (a <= n)
	// {   
	// 	while (b > 0)
	// 	{

	// 		cout << c << " ";
	// 		b--;
	// 		c--;
	// 	}
	// 	b=n-a;
	// 	cout << endl;
	// 	a++;
	// }
	//
	//for-each loop
	// int myNumbers[5] = {10, 20, 30, 40, 50};
	// for (int i : myNumbers)
	// {
	// 	cout << i << "\n";
	// }
	//
	//triangle reverse rows
	// int n,a=1,b=0,c=1;
	// cout<<"Enter the nummber"<<endl;
	// cin>>n;
	// while(a<=n){
	// 	while(b<a){
	// 		cout<<c<<" ";
	// 		c--;
	// 		b++;
	// 	}
		
	// 	cout<<endl;
	// 	b=0;
	// 	a++;
	// 	c=a;

	// }
	// 
	// square letters
	// int n,a=0,b=0;
	// char c;
	// cout<<"enter the number"<<endl;
	// cin>>n;
    // c= 'A'+n-1;
	// while(a<n){	
	// 	c='A'+a;
	// 	while(b<n){
	// 		cout<<c<<" ";
	// 		b++;
	// 		c++;
	// 	}
	// 	cout<<endl;
		
	// 	b=0;
	// 	a++;
	// }
	//
	//
	//printing triangle with spaces
	// int n, a=1,b=1,c=1;
	// cout<<"Enter the number"<<endl;
	// cin>>n;
	// while(a<=n){
	// 	while(b<=n-a){
	// 		cout<<"  ";
	// 		// c++;
	// 		// cout<<c;
	// 		b++;
	// 	}
	// 	while(b<=n){
	// 		cout<<"* ";
	// 		b++;
	// 	}
	// 	b=1;
	// 	cout<<endl;
	// 	a++;
	// }


	// //printing star inverse triangle with spaces
	// int n, a=0,b=1,c=1;
	// cout<<"Enter the number\n";
	// cin>>n;
	// while(a<n){
	// 	while(b<=n-(n-a)){
	// 		cout<<"  ";
	// 		b++;
	// 	}
	// 	while(c<=n-a){
	// 		cout<<a+1<<" ";
	// 		c++;
	// 	}
		
	// 	cout<<endl;
	// 	b=1;
	// 	c=1;
	// 	a++;
	// }

	//printing number trangle with spaces 1st
	// int n, a=1,b=1, c=1;
	// cout<<"Enter the number"<<endl;
	// cin>>n;
	// while(a<=n){
	// 	while(b<=n-a){
	// 		cout<<"  ";
	// 		b++;
	// 	}
	// 	while(b<=n){
	// 		cout<<c+n-a<<" ";
	// 		b++;
	// 		c++;
	// 	}
	// 	cout<<endl;
	// 	c=1;
	// 	b=1;
	// 	a++;
	// }


	//Piramidal shape of numbers
	// int n, a=1, b=1, c=1;
	// cout<<"Enter the number"<<endl;
	// cin>>n;
	// while(a<=n){
	// 	while(b<=n-a){
	// 		cout<<"  ";
	// 		b++;		
	// 	}
	// 	while(b<n){
	// 		cout<<c<<" ";
	// 		c++;
	// 		b++;
	// 	}
	// 	while(b<n+a){
	// 		cout<<c<<" ";
	// 		c--;
	// 		b++;
	// 	}
	// 	cout<<endl;
	// 	b=1;
	// 	c=1;
	// 	a++;
	// }

	//Dabang pattern
	int n, a=1, b=1, c=1;
	cout<<"Enter number\n";
	cin>>n;
	while(a<=n){
		while(b<=n-a+1){
			cout<<c<<" ";
			c++;
			b++;
		}
		while(b<=n){
			cout<<"* ";
			b++;
			c++;
		}
		c=n;
		while(b<n+a){
			cout<<"* ";
			b++;
			c--;
		}
		while(b<=n*2){
			cout<<c<<" ";
			c--;
			b++;
		}
		cout<<endl;
		b=1;
		c=1;
		a++;
	}


}