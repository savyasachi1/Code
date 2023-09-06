#include<iostream>
#include<queue>
using namespace std;

void print(queue<int>q){
    queue<int> temp = q;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;
}

int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    print(q);
    q.push(30);
    print(q);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl;
    print(q);
    q.pop();
    q.pop();
    print(q);
    cout<<q.size()<<endl;
    return 0;
}