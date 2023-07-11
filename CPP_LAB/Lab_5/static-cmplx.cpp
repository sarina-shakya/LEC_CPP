#include<iostream>
using namespace std;
class complex{
    private:
    double real;
    double imag;
    static int count;  // static data member to keep track of the total number of objects


    public:
    complex(double re,double im){
        real=re;
        imag=im;
        count++;  // increment the count each time a new object is created

    }
    void static displayCount(){
        cout<<"The number of objects created is: "<<count<<endl;
    }
};
int complex::count=0;  // initialize the static data member count to 0
int main(){
    complex c1(2.3,4.3);
    complex c2(2.5,9.0);
    complex c3(1.4,8.7);

    complex::displayCount();  // calling the static function to display the total number of objects
}