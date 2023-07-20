#include <iostream>
using namespace std;

int length(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int countelement(char str[], int fstocc, int len, char c)
{
    int count=0;
    for(int i=fstocc;str[i]==c && i<len;i++)
    {
        count++;
    }
    return count;
}

void newString(char str[], int fstocc, int len, int occ)
{
    char ch;
    switch(occ) {
        case 2:
            ch='2';
            break;
        case 3:
            ch='3';
            break;
        case 4:
            ch='4';
            break;
        case 5:
            ch='5';
            break;
        case 6:
            ch='6';
            break;
        case 7:
            ch='7';
            break;
        case 8:
            ch='8';
            break;
        case 9:
            ch='9';
            break;
        default:
            ch='\0';
            break;
        
    }


    for(int i=fstocc;i<(len-occ);i++)
    {
        if(occ==1){
            break;
        }
        str[i+1]=ch;
        str[i+2]=str[i+occ];
        len=length(str);
    }
}

void modify(char str[])
{
    int len= length(str);
    for(int i=0;i<len;i+=2)
    {
        char c= str[i];
        int occ= countelement(str, i, len, c);
        newString(str,i,len,occ);
        len=length(str);
    }
}

int main(){
    char str[50];
    cout<<"Enter the string :"<<endl;
    cin.getline(str,50);
    cout<<"Entered string is : "<<str<<endl;
    modify(str);
    cout<<"New String is : "<<str<<endl;
    return 0;
}