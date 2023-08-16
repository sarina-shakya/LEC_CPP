#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter value of a and b: ";
    cin>>a>>b;
    int x;
    try{
        if(x=a){
            cout<<"Result: "<<(a-b)<<endl;
        }
        else{
            throw(x);
        }
    }
    catch(int i){
        cout<<"Next statement"<<endl;
    }
}
