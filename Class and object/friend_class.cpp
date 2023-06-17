#include<iostream>
using namespace std;

class Simple_A{
    private:
    int i=3;
    friend class Simple_B;  //friend class
};
class Simple_B{
    public:
    Simple_A a;
    void display(){
        cout<<"The value of i is: "<<a.i;
    }
};

int main(){
    Simple_B b;
    b.display();
    return 0;
}