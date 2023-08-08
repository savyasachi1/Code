#include<iostream>
using namespace std;

bool isPerfectSquare(int num){
    for( int i = 1;i<=num/2;i++){
        if((i*i)==num)
            return 1;
    }
    return 0;
}

int main()
{
    int num;
    cout<<"Enter the number to check : ";
    cin>>num;
    if (isPerfectSquare(num))
        cout << "It is a perfect square";
    else
        cout << "It is not a perfect square";
    return 0;
}