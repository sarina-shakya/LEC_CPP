#include<iostream>


void staticExample() {
    static int count=0;
    count++;
    std::cout<<"Static variable: "<<count<<std::endl;
}

void constantExample(){
    const int number=10;
    std::cout<<"Const varaible: "<<number<<std::endl;
}

int main(){
    std::cout<<"Static: "<<std::endl;
    staticExample();
    staticExample();
    staticExample();

    std::cout<<"Const: "<<std::endl;
    constantExample();
    constantExample();

    return 0;
}