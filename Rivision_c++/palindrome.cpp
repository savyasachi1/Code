#include <iostream>
// #include<cstdio>
#include<string>
using namespace std;

char length(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

char palin(char str[], int len)
{
    for (int i = 0; i < len; i++, len--)
    {
        if (str[i] != str[len - 1])
        {
            return 0;
        }
    }
    return 1;
}

void lowercase(char str[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 65 && str[i] <= 90){
            str[i]=str[i] + 32;
        }
    }
}

int main()
{
    char str[20];
    cout << "Enter the string of characters" << endl;
    cin.getline(str, 20);
    cout << str << endl;
    int len = length(str);
    lowercase(str, len);
    cout<<str<<endl;
    bool a = palin(str, len);
    cout << " " << a;
}