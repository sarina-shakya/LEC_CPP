#include<iostream>
using namespace std;
class polygon{
    protected:
        float length;
        float height;
    public:
        polygon(){length=0; height=0;}
        polygon(float l, float h){
            length=l; height=h;
        }
        virtual float area()=0;
};
class rectangle:public polygon{
    public:
        rectangle(){}
        rectangle(float l, float h):polygon(l,h){}
        float area(){
            return length*height;
            }                  
};
class triangle:public polygon{
    public:
        triangle(){}
        triangle(float l, float h):polygon(l,h){}
        float area(){
            return 0.5*length*height;
            }                  
};
int main(){
    rectangle rec(2.5,4.8);

    triangle tri(3.5,5.6);

    cout<<"Rectangle Area: "<<rec.area()<<endl;
    cout<<"Triangle Area: "<<tri.area()<<endl;
}