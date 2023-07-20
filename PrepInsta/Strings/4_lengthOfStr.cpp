#include <iostream>
#include<string>
using namespace std;

int count(string str)
{
    int count=0;
    for (int i = 0; str[i]!= '\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    string str;
    cout<<"Enter the string : ";
    // cin>>str;
    cout<<str<<endl;
    // getline(cin,str);
    cout<<count(str);
}