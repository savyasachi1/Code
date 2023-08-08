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

bool armStrong(int num){
    int temp = num, sum = 0, digit;
    int len = countLen(num);
    while(num!=0){
        digit = num%10;
        sum = sum + Power(digit, len);
        num = num/10;
    }
    return (temp==sum);
}

int main()
{
    int num1, num2;
    cout<<"Enter the numbers : ";
    cin>>num1>>num2;

    for(int i = num1;i<=num2;i++){
        if(armStrong(i))
            cout<<i<<" ";
    }


    return 0;
}
