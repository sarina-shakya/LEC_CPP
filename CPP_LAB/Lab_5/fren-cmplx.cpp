#include<iostream>
#include<cmath>
using namespace std;
class complex{
    private:
    double real;
    double imag;
    public:
    complex(double r,double i){
        real=r;
        imag=i;
    }
    friend double magnitude(complex &c);
};
double magnitude(complex &c){
    double mag=sqrt(c.real*c.real+c.imag*c.imag);
    return mag;
}
int main(){
    complex c1(3.2,4.3);
    double mag=magnitude(c1);
    cout<<"Magnitude of c1:"<<mag<<endl;

    complex c2(-1.4,6.5);
    mag=magnitude(c2);
    cout<<"Magnitude of c2:"<<mag<<endl;
}