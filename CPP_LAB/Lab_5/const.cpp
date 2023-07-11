#include<iostream>
using namespace std;
class complex{
    private:
    const double real=3.5;
    double imag;

    public:
    void getimag(){
        cout<<"Enter imaginary part: ";
        cin>>imag;
        
    }

    void showdata(){
        cout<<"Real part is: "<<real<<endl;
        cout<<"Imaginary part is: "<<imag<<endl;
    }
    void display();
};
    void complex :: display(){
        cout<<"("<<real<<","<<imag<<")";
    }
    

int main(){
    complex c1;
    c1.getimag();
    c1.showdata();
    cout<<"The complex number is ";
    c1.display();
}