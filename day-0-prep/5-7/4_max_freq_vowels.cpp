// wap to find the maximum frequency of a vowel in a string
#include <iostream>
using namespace std;

int length(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int findVowels(char str[])
{
    int count = 0;
    for (int i = 0; i < length(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}

int main(){
    char str[50];
    cout<<"Enter the string :"<<endl;
    cin.getline(str,50);
    cout<<"Entered string is : "<<str<<" with "<<findVowels(str)<<" vowels"<<endl;
}