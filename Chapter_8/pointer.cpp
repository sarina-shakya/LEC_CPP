#include<iostream>
using namespace std;
class Parent{
    public:
    virtual void display(){
        cout<<"This is parent display.";
    }
};
class Child:public Parent{
    public:
    void display(){
        cout<<"This is child display. ";
    }
};
int main(){
    Child c1;
    Parent *Bptr; //Base pointer so parent display
    Bptr=&c1;
    Bptr->display();
}