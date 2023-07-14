#include<iostream>
using namespace std;
class complex{
    private:
        float real,imag;
    public:
        complex(){
            real=0;
            imag=0;
        }
        complex(float re,float im)
        {
            real=re;
            imag=im;
        }
        void display(){
            cout<<"("<<real<<","<<imag<<")";
        }
        friend complex operator -(complex c);
};
complex operator -(complex c)
{
    float re= -c.real;
    float im= -c.imag;
    return complex(re,im);
}
int main(){
    complex c;
    c=complex(4.4,3.6);
    c=-c;
    c.display();
    return 0;
}
