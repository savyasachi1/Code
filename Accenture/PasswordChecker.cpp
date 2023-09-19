#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool capCheck(char a){
    if(a >= 65 && a <= 90)
        return 1;
    // if(isupper(a))
    //    return 1;
    return 0; 
}

int CheckPassword(char str[], int n){
    bool numCheck = 0, capitalCheck = 0;
    if(n<4){
        cout<<"Characters are less than 4"<<endl;
        return 0;
    }
    
    if(isdigit(str[0])){
        cout<<"First character is num"<<endl;
        return 0;
    }
    for(int i = 0;i<n;i++){
        if(str[i] == ' ' || str[i] == '/'){
            cout<<"There is a slash or space in between"<<endl;
            return 0;
        }
        if(!capitalCheck){
            capitalCheck = capCheck(str[i]);
        }
        if(!numCheck)
            numCheck = isdigit(str[i]);
    }
    if(numCheck && capitalCheck)
        return 1;
    cout<<"A number or a capital is not present"<<endl;
    return 0;
}

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    char* c = &s[0];
    cout<<"Entered password is "<<s<<endl;
    cout<<CheckPassword(c, n);
    return 0;
}