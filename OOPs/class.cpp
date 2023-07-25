#include <iostream>
#include <string>
using namespace std;

class forest
{

    public:
    string name;
    string color;
    string sound;

    static int num;


    // default constructor
    forest()
    {
        cout << "Default Constructer called" << endl;
    }

    //parameterized constructer
    forest(string name, string color)
    {
        cout << "Parameterized constructer called" << endl;
        this->name = name;
        this->color = color;
        this->sound = sound;
    }

    // copy constructor to learn, deep copy, shallow copy

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
    void setSound(string s){
        this->sound = s;
    }
    ~forest(){
        cout<<"Destructor called for "<<this->name<<endl;
    }
    static int getvar(){
        cout<<"static function"<<endl;
        return num;
    }
};

//initilizing static int
int forest::num=10;

int main()
{
    cout<<forest::num<<endl;
    forest animal1;
    animal1.setName("lion");
    animal1.setColor("brown");
    string str="roar";
    cout<<animal1.num<<endl;;
    animal1.setSound(str);
    // cout<<animal1.getName()<<" "<<animal1.getColor()<<endl;
    animal1.print();
    cout<<forest::getvar()<<endl;
    forest *animal2 = new forest("cat", "black");
    animal2->print();
    forest animal3(animal1);
    animal3.sound[2]='g';
    animal3.print();
    animal1.print();
    delete animal2;
}
