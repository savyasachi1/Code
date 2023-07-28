#include<iostream>
using namespace std;


// //single inheritence
// class Animal{
//     public:
//     int age;
//     int weight;

//     void setAge(int n){
//         this->age=n;
//     }
//     void getAge(){
//         cout<<age<<endl;
//     }
// };

// //dog is a singly inherited class from animal
// class Dog: public Animal{
    
//     public:
//     void print(){
//         cout<<"Dog inherited from animal"<<endl;
//     }
// };


// // Multi-level inheritence
// class Animal{
//     public: 
//     int age;
//     int weight;

//     void setAge(int n){
//         this->age=n;
//     }
//     void getAge(){
//         cout<<age<<endl;
//     }
// };

// class Dog: public Animal{
//     public:
//     void printDog(){
//         cout<<"Dog is inherited from Animal "<<endl;
//     }
// };

// class Bark: public Dog{
//     public:
//     void printBark(){
//         cout<<"Bark is inherited from Dog"<<endl;
//         cout<<"Forming a multi-level inheritence"<<endl;
//     }
// };


// // Multiple inheritence
// class Animal{
//     public: 
//     int age;
//     int weight;

//     Animal(){
//         cout<<"Animal created"<<endl;
//     }
//     void setAge(int n){
//         this->age=n;
//     }
//     void getAge(){
//         cout<<age<<endl;
//     }
// };

// class Dog{
//     public:
//     Dog(){
//         cout<<"Dog created"<<endl;
//     }
//     // void printDog(){
//     //     cout<<"Dog is created "<<endl;
//     // }
// };

// class Bark: public Animal, public Dog{
//     public:
//     void printBark(){
//         cout<<"Bark is inherited from Dog and animal"<<endl;
//         cout<<"Forming a multiple inheritence"<<endl;
//     }
// };



// Hierarchical inheritence
// class Animal{
//     public: 
//     int age;
//     int weight;

//     Animal(){
//         cout<<"Animal created"<<endl;
//     }
//     void setAge(int n){
//         this->age=n;
//     }
//     void getAge(){
//         cout<<age<<endl;
//     }
// };

// class Dog: public Animal{
//     public:
//     Dog(){
//         cout<<"Dog created"<<endl;
//     }
//     void printDog(){
//         cout<<"Dog is inherited from Animal "<<endl;
//     }
// };

// class Lion: public Animal{
//     public:
//     void printLion(){
//         cout<<"Lion is inherited from Animal "<<endl;
//     }
// };


//hibrid inheritence
class livingThing{
    public:
    int age;
    int weight;

    livingThing(){
        cout<<"Livingthing created"<<endl;
    }
};

class Animal: public livingThing{
    public:
    int ani;
    Animal(){
        cout<<"Animal Created"<<endl;
    }
};

class Human : public livingThing{
    public:
    Human(){
        cout<<"human created"<<endl;
    }
};

class Space {
    public:
    int a;
    Space(){
        cout<<"Space created"<<endl;
    }
};

class Fish : public livingThing{
    public:
    Fish(){
        cout<<"Fish created"<<endl;
    }
};

class mix : public Animal, public Space{
    public:
    mix(){
        cout<<"Mix created"<<endl;
    }
};





int main(){
    

    mix m1;
    Animal a1;
    Fish f1;


    // Dog d1;
    // Lion l1;
    // d1.printDog();
    // l1.printLion();



    // Bark b1;
    // // b1.printDog();
    // b1.printBark();




    // Bark b1;
    // b1.printDog();
    // b1.printBark();



    // Dog d1;
    // d1.setAge(6);
    // cout<<d1.age<<endl;
    // d1.print();
}