#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "Savyasachi is a bad boy";
    cout<<str<<endl;
    str.replace( 16, 3, "good");
    cout<<str;
    return 0;
}