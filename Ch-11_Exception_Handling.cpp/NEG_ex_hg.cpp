#include<iostream>
#include<cmath>
using namespace std;
class Number{
    private:
        double num;
    public:
        class NEG{};
        void readnum();
        double sqroot();
};
void Number::readnum(){
    cout<<"Enter number:";
    cin>>num;
}                                                               //generic catchlog catch(...){}  //specific  497 pg 491 sometimes
double Number::sqroot(){
    if (num<0)
        throw NEG();
    else
        return (sqrt(num));

}
int main(){
    Number n1;
    double res;
    n1.readnum();
    try{
        cout<<"\nTrying to find squareroot...";
        res=n1.sqroot();
        cout<<"\nSquare root is:"<<res<<endl;
        cout<<"Success... Exception is not raised"<<endl;
    }
    catch(Number::NEG){
        cout<<"\nSquare root of negative number " "not possible!"<<endl;
    }

return 0;

}