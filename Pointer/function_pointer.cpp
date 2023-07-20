#include <iostream>
#include <string.h>
using namespace std;

void print(char name[])
{
    cout << " Hello " << name << endl;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 10, b = 20;
    void (*name)(char *);
    name = print;
    
    name("Savya");
    int (*ptr)(int, int);
    ptr = add;
    cout << ptr(a, b);
}