#include<iostream>
using namespace std;

class Queue{
    public:
    int* arr;
    int size;
    int tail;

    Queue(int size){
        arr = new int[size-1];
        this->size = size-1;
        tail = -1;
    }

    void push(int data){
        tail++;
        if(tail>size){
            cout<<"Queue Overflow"<<endl;
            tail--;
            return;
        }
        arr[tail] = data;
    }

    void pop(){
        int temp = arr[0];
        for(int i=0;i<tail;i++){
            arr[i]=arr[i+1];
        }
        cout<<"Element poped is- "<<temp<<endl;
        tail--;
    }

    void top(){
        if(tail<0){
            cout<<"Queue empty"<<endl;
            return;
        }
        cout<<arr[0]<<endl;
    }
    void print(){
        if(tail<0){
            cout<<"Queue empty"<<endl;
            return;
        }
        for( int i=0;i<=tail;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void empty(){
        if(tail<0)
            cout<<"Queue empty"<<endl;
        else 
            cout<<"Not empty"<<endl;
    }
};

int main()
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(50);
    q.top();
    q.print();
    q.pop();
    q.print();
    q.top();
    q.empty();
    q.pop();
    cout<<q.tail+1<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.empty();

    return 0;
}