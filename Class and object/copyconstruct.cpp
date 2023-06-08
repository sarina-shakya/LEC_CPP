#include<iostream>
using namespace std;
class wall{
    private:
        double length;
        double height;
    public:
        wall(double len, double hgt){
            length=len;
            height=hgt;
        }
    wall(wall &obj){
        length=obj.length;
        height=obj.height;
    }
    double calculateArea(){
        return length*height;
    }
};
int main(){
    wall wall1(10.5,8.6);
    cout<<"Area of wall1 is:"<<wall1.calculateArea()<<endl;
    wall wall2=wall1;
    cout<<"Area of wall2 is:"<<wall2.calculateArea()<<endl;

    return 0;
}