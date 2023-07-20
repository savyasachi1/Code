#include <iostream>
#include <string>
using namespace std;

bool vowels(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return true;
    return false;
}

int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    for (char ch : str)
    {
        if (vowels(ch))
        {
            continue;
        }
        else
        {
            cout << ch;
        }
    }
}