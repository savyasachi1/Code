#include <iostream>
#include <string>
using namespace std;

int calculate(string s)
{
    int a = int(s[0])-48, b;
    cout<<a;
    for (int i = 1; i < s.length(); i += 2)
    {
        if (s[i] == 'A')
        {
            a &= int(s[i + 1])-48;
            cout<<a<<endl;
        }
        else if (s[i] == 'B')
        {
            a |= int(s[i + 1])-48;
            cout<<a<<endl;
        }
        else if (s[i]=='C')
        {
            a ^= int(s[i + 1])-48;
            cout<<a<<endl;
        }
    }
    return a;
}

int main()
{
    string s;
    cin >> s;
    cout << calculate(s);
    return 0;
}