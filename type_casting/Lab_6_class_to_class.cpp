#include<iostream>
using namespace std;
class Design1{
    public:
    int code;
    int qty;
    double price;

    Design1(int c, int q, double p) : code(c), qty(q), price(p) {}
};
class Design2{
    public:
    int code;
    double value;

    Design2(const Design1& D1) : code(D1.code), value(D1.qty * D1.price){}
};
int main(){
    Design1 D1(101,5,10.50);
    Design2 D2=D1;

    cout<<"Design1: code="<<D1.code<<", qty="<<D1.qty<<", price="<<D1.price<<endl;
    cout<<"Design2: code="<<D2.code<<", value="<<D2.value<<endl;
}
