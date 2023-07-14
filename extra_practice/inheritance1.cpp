#include <iostream>
using namespace std;

//A dog is an animal.
class Animal {

    public:
    void walk() {
        cout<<"Animals walk."<<endl;
    }
    void eat() {
        cout<<"Animals eat."<<endl;
    }
};

class Dog : public Animal {

    public:
    void bark() {
        cout<<"Dogs bark."<<endl;
    }
};

int main() {
    Dog dog1;

    dog1.walk();
    dog1.eat();

    dog1.bark();

    return 0;

}

    