#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout<<"Enter the character : ";
    cin>>letter;
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' )
        cout << "It is a Vowel";
    else
        cout << "It is a Consonent";
}