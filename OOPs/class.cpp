#include <iostream>
using namespace std;

class forest
{

    public:
    string name;
    string color;
    char* sound;


    // default constructor
    forest()
    {
        cout << "Default Constructer called" << endl;
    }

    // copy constructor
    forest(forest& temp)
    {
        char *ch = new char[10];
        strcpy(ch, temp.sound);
        cout<<"Copy constructor called"<<endl;
        this->name = temp.name;
        this->color = temp.color;
        this->sound = ch;
    }

    //parameterized constructer
    forest(string name, string color, char* sound)
    {
        cout << "Parameterized constructer called" << endl;
        this->name = name;
        this->color = color;
        this->sound = sound;
    }
    //print
    void print()
    {
        cout << this->name << endl;
        cout << this->color << endl;
        cout<< this->sound<<endl;
    }

    //getter
    string getName()
    {
        return name;
    }
    string getColor()
    {
        return color;
    }

    //setter
    void setName(string n)
    {
        this->name = n;
    }
    void setColor(string c)
    {
        this->color = c;
    }
    void setSound(char* s){
        this->sound = s;
    }
};

int main()
{
    forest animal1;
    animal1.setName("lion");
    animal1.setColor("brown");
    char str[5]="roar";
    animal1.setSound(str);
    // cout<<animal1.getName()<<" "<<animal1.getColor()<<endl;
    animal1.print();
    forest *animal2 = new forest("cat", "black", "meow");
    animal2->print();
    forest animal3(animal1);
    animal3.sound[2]='g';
    animal3.print();
    animal1.print();
}
