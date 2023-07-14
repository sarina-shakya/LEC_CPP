#include<iostream>
using namespace std;
class Person{
    private:
        string name;
        int age;
        
    public:
        double height;
        Person(){
            name = " ";
            age = 0;
            height = 0.0;
        }
        Person(string n, int a, double h) {
        name = n;
        age = a;
        height=h;
       
    }
        void getdata(){
            cout<<"Enter name: "<<endl;
            cin>>name;
            cout<<"Enter age: "<<endl;
            cin>>age;
            cout<<"Enter height: "<<endl;
            cin>>height;
        }
        void showdata(){
            cout<<"Name:"<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Height: "<<height<<endl;
            
        }
};
int main(){
    Person P;
    P.getdata();
    P.showdata();

    Person p2("John", 25,5.5);
    p2.showdata();

}