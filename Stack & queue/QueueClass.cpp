#include<iostream>
using namespace std;

class Queue{
    public:
    int* arr;
    int size;
    int head;
    int tail;

    Queue(int size){
        arr = new int[size-1];
        this->size = size-1;
        tail = -1;
        head = 0;
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
        // int temp = arr[0];
        // for(int i=0;i<tail;i++){
        //     arr[i]=arr[i+1];
        // }
        cout<<"Element poped is- "<<arr[head]<<endl;
        head++;
    }

    void front(){
        if(tail-head<0){
            cout<<"Queue empty"<<endl;
            return;
        }
        cout<<arr[0]<<endl;
    }

    void back(){
        if(tail-head<0){
            cout<<"Queue empty"<<endl;
            return;
        }
        cout<<arr[tail]<<endl;
    }


    void print(){
        if(tail-head<0){
            cout<<"Queue empty"<<endl;
            return;
        }
        for( int i=head;i<=tail;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void empty(){
        if(tail-head<0)
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
    q.back();
    q.push(50);
    q.front();
    q.print();
    q.pop();
    q.print();
    q.front();
    q.empty();
    q.back();
    q.pop();
    cout<<q.tail+1<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.empty();

    return 0;
}