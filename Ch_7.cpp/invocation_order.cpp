#include<iostream>
using namespace std;
class Parent{
    public:
    Parent(){
        cout<<"This is parent constructor"<<endl;
    }
    ~Parent(){
        cout<<"This is parent destructor"<<endl;
    }
};
class Child:public Parent{
    public:
    Child(){
        cout<<"This is child constructor"<<endl;
    }
    ~Child(){
        cout<<"This is child destructor";
    }
};
int main(){
    Parent P1;
    Child C1;
}