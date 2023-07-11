#include<iostream>
#define PI 3.14
using namespace std;
int calculateArea(int length){
    return 6*length*length;
}
double calculateArea(double a,double b)
{
    return a*b;
    }
double calculateArea(double r)
{
    return PI*r*r;
    }
int main(){
    int cube=calculateArea(10);
    double rectangle=calculateArea(5.3,2.5);
    double circle=calculateArea(3.5);

    int shape;
    cout<<"Area to be calculated of: ";
    cin>>shape;

    switch(shape){
        case 1:
        cout<<"Area of cube is: "<<cube<<endl;
        break;
        case 2:
        cout<<"Area of rectangle is: "<<rectangle<<endl;
        break;
        case 3:
        cout<<"Area of circle is: "<<circle<<endl;
        break;
    }
    
}