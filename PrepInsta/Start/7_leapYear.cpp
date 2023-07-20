#include <iostream>
using namespace std;

bool check(int a, int b)
{
    if (a % b == 0)
        return true;
    return false;
}

int main(){
    int year, a=4, b=100, c=400;
    cout<<"Enter the year : ";
    cin>>year;
    if(check(year,a)){
        if(check(year,b))
            if(check(year,c))
                cout<<" The year is a leap year";
            else    
                cout<<" The year is not a leap year";
        else
            cout<<"The year is a leap year";
    }
    else    
        cout<<" The year is not a leap year";

}