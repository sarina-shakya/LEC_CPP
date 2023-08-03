#include<iostream>
using namespace std;
class Time{
    int hrs,min;
    public:
        Time(int);
        void display(); 
};
Time::Time(int t){
    cout<<"Basic to class type conversion... "<<endl;
    hrs=t/60;
    min=t%60;
};
void Time::display(){
    cout<<"hours: "<<hrs<<endl;;
    cout<<"minutes: "<<min<<endl;
};
int main(){
    int duration;
    cout<<"Enter the duration in minutes : ";
    cin>>duration;

    Time t1=duration;
    t1.display();
}
