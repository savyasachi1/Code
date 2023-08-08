#include<iostream>
using namespace std;

int sumOfFactors(int num){
    int sum=1;
    for(int i=2;i<num;i++){
        if(num%i==0)
            sum+=i;
    }
    return sum/num;
}

int main()
{
    int num1, num2;
    cout<<"Enter the numbers : ";
    cin>>num1>>num2;
    if(sumOfFactors(num1)==sumOfFactors(num2))
        cout<<"They are friendly pair";
    else    
        cout<<"They are not friendly pair";
    return 0;
}

/*
We will write a code to Check Friendly pair in C++

Two numbers num1 & num2 are friendly pairs if the 
following holds true -

(Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2
*/