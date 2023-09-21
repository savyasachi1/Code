#include<iostream>
#include<string>
using namespace std;

int romanToInt(string s) {
        int num = 0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='I')
                num++;
            else if(s[i]=='V'){
                if(s[i-1]=='I'){
                    num+=4;
                    i--;
                    continue;
                }
                num+=5;
            }
            else if(s[i]=='X'){
                if(s[i-1]=='I'){
                    num+=9;
                    i--;
                    continue;
                }
                num+=10;
            }
            else if(s[i]=='L'){
                if(s[i-1]=='X'){
                    num+=40;
                    i--;
                    continue;
                }
                num+=50;
            }
            else if(s[i]=='C'){
                if(s[i-1]=='X'){
                    num+=90;
                    i--;
                    continue;
                }
                num+=100;
            }
            else if(s[i]=='D'){
                if(s[i-1]=='C'){
                    num+=400;
                    i--;
                    continue;
                }
                num+=500;
            }
            else if(s[i]=='M'){
                if(s[i-1]=='C'&& i!=0){
                    num+=900;
                    i--;
                    continue;
                }
                num+=1000;
            }
        }
    return num;
    }

int main()
{
    string s = "MCMXCIV";
    cout<<romanToInt(s);
    return 0;
}