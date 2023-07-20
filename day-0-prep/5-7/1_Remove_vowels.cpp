#include <iostream>
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

void elementpop(char str[], int a, int n){
    for(int i=a;i<n;i++){
        str[i]=str[i+1];
    }
}

void remove_vowels(char str[], int n)
{
    for (int i = 0;i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
          str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            elementpop(str,i,n);
            i--;
          }
    }
}

int main()
{
    char str[20];
    cout << "Enter the string " << endl;
    cin.getline(str, 20);
    int n = length(str);
    cout << "Entered string is :" << str << endl;
    remove_vowels(str, n);
    cout<<str<<endl;
}