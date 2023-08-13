#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    cout<<"Size of Stack "<<s.size()<<endl;
    if(s.empty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;
    s.push(10);
    cout<<s.top()<<endl;
    s.push(12);
    cout<<s.top()<<endl;
    s.push(14);
    cout<<s.top()<<endl;
    s.push(16);
    cout<<s.top()<<endl;
    s.push(18);
    cout<<"Size of Stack "<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    if(s.empty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;
    cout<<"Size of Stack "<<s.size()<<endl;
    return 0;
}