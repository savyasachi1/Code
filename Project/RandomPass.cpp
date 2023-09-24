#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string passwordDefinedLength(char *characters, int sizeOfArray)
{

    int sizeOfPassword;
    cout << "Enter the size of password: ";
    cin >> sizeOfPassword;
    string password;
    int num;
    for (int i = 0; i < sizeOfPassword; i++)
    {
        num = rand() % 68;
        password += characters[num];
    }
    return password;
}

string randomPassword(char *characters, int sizeOfArray)
{

    string password;
    int num;
    for (int i = 0; i < 10; i++)
    {
        num = rand() % 68;
        password += characters[num];
    }
    return password;
}

string passwordDefinedLengthOfEach(char *characters, int sizeOfArray)
{
    int sizeOfPassword, Capital, Small, Charr, Number, num;
    cout << "Enter total length of password: ";
    cin >> sizeOfPassword;
    cout << "Enter correct distribution of Capital letters, small letters, characters and numbers: ";
    cin >> Capital >> Small >> Charr >> Number;
    string password;
    for (int i = 0; i < sizeOfPassword; i++)
    {
        if (i < Capital)
        {
            num = rand() % 26;
            password += characters[num];
        }
        else if (i < Small+Capital)
        {
            num = (rand() % 26) + 26;
            password += characters[num];
        }
        else if (i < Charr+Small+Capital)
        {
            num = (rand() % 7) + 52;
            password += characters[num];
        }
        else
        {
            num = (rand() % 10) + 59;
            password += characters[num];
        }
    }
    return password;
}

string oneTimePassword(char *characters, int sizeOfArray)
{
    int sizeOfOTP;
    cout << "Enter the size of OTP: ";
    cin >> sizeOfOTP;
    string OTP;
    int num;
    for (int i = 0; i < sizeOfOTP; i++)
    {
        num = (rand() % 10) + 59;
        OTP += characters[num];
    }
    return OTP;
}

int main()
{
    char characters[100] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                            'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                            'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                            '!', '@', '#', '$', '%', '&', '*', '0', '1', '2', '3', '4', '5',
                            '6', '7', '8', '9'};

    // indexes:: 0-25(capital letter):: 26-51(small letter):: 52-58(unique characters):: 59-68(Numbers)
    int sizeOfArray = 68;
    cout << "1. Random password of any size" << endl
         << "2. Random password of difined size" << endl
         << "3. password defining length of letters, characters and numbers" << endl
         << "4. One Time Password of defined length" << endl
         << "Choose from above: ";
    int num;
    cin >> num;
    string s;
    switch (num)
    {
    case 1:
        s = randomPassword(characters, sizeOfArray);
        cout << s << endl;
        break;
    case 2:
        cout << passwordDefinedLength(characters, sizeOfArray) << endl;
        break;
    case 3:
        cout << passwordDefinedLengthOfEach(characters, sizeOfArray) << endl;
        break;
    case 4:
        cout << oneTimePassword(characters, sizeOfArray) << endl;
        break;
    default:
        cout << "Invalid Number" << endl;
    }
    return 0;
}