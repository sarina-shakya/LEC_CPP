#include<iostream>
using namespace std;

class Vehicle{
    private:
            int platenumber;
    public:
        int getnumber(int a){
            
            platenumber = a;
            return platenumber;
        }
        
};

int main(){
    Vehicle scooter;
    cout<<"The number of my scooter is : "<<scooter.getnumber(8765);
}