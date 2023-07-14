#include<iostream>
using namespace std;

int main(){
    int normalVariable=5;
    normalVariable=10;
    cout<<"Normal Variable "<<normalVariable<<endl;

    const int constVariable=5;
    //constVariable=10;  //Error
    cout<<"Const Variable "<<constVariable<<endl;
}