#include<iostream>
#include<string>
using namespace std;

void remove(string str){
    size_t found=str.find("is");
    while (found !=string :: npos){
        str.erase(found, 3);
        found=str.find("is");
    }
    cout<<str;
}

int main(){
    string str;
    getline(cin,str);
    remove(str);
}