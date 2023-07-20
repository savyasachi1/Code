#include<iostream>
using namespace std;

// int product(int a, int b, int c, int d, int e, int f){
//     int product;
//     if(a==0){
//         a=1;
//     }
//     if(b==0){
//         b=1;
//     }
//     if(c==0){
//         c=1;
//     }
//     if(d==0){
//         d=1;
//     }
//     if(e==0){
//         e=1;
//     }
//     if(f==0){
//         f=1;
//     }
//     product = a*b*c*d*e*f;
//     return product;
// }

// int sum(int a, int b, int c, int d, int e, int f){
//     int sum= a+b+c+d+e+f;
//     return sum;
// }

// int digit(int n){
//     int a, b, c, d, e, f;
    
//     a=n%100000;
//     b=a%10000;
//     c=b%1000;
//     d=c%100;
//     e=d%10;
//     f=e%1;
    
    
    


// }

int main(){
    int a, n, sum=0, product=1;
    cout<<"Enter the number\n";
    cin>>n;
    int b=n;
    for(int i=1; i<=n;i=i*10){
        a=b%10;
        sum=sum+a;
        product=product*a;
        b=b/10;
        cout<<b<<endl;
    }
    int diff=product-sum;
    cout<<sum<<"   "<<product<<"   "<<diff;
}