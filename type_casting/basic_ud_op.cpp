#include<iostream>
using namespace std;
class Time{
    int hrs,min;
    public:
        void operator=(int);
        void display(); 
};
void Time::operator=(int t){
    cout<<"Basic to class type conversion... "<<endl;
    hrs=t/60;
    min=t%60;
};
void Time::display(){
    cout<<"hours: "<<hrs<<endl;;
    cout<<"minutes: "<<min<<endl;
};
int main(){
    Time t1;
    int duration;
    cout<<"Enter the duration in minutes : ";
    cin>>duration;
    cout<<"obj t1 overloaded assignment"<<endl;
    t1=duration;

    t1.display();
    cout<<"Second method"<<endl;

    
    t1.operator=(duration);
    t1.display();
}
