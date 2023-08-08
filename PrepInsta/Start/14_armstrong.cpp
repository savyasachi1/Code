#include<iostream>
#include<math.h>
using namespace std;

int countLen(int num){
    int count=0;
    while(num>0){
        num = num/10;
        count++;
    }
    return count;

}

int Power(int num,int len){
    int multi = 1;
    for( int i=0;i<len;i++){
        multi = multi *num;
    }
    return multi;
}

bool armStrong(int num, int len){
    int temp = num, sum = 0, digit;
    while(num!=0){
        digit = num%10;
        sum = sum + Power(digit, len);
        num = num/10;
    }
    return (temp==sum);
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int len = countLen(num);
    //cout<<len;
    // cout<<armStrong(num, len);
    if(armStrong(num,len))
        cout<<"Yes";
    else    
        cout<<"No";
    return 0;  
}
