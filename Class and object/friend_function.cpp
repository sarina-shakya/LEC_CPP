#include<iostream>
using namespace std;

class Sample{
    friend float mean(Sample S);
    private:
        float num1,num2;
    public:
        void getdata()
        {
            float a,b;
            cout<<"Input data"<<endl;
            cin>>a>>b;
            num1=a;
            num2=b;
        }
};
float mean(Sample S)//object as parameter
{
    float m;
    m=(S.num1+S.num2)/2;
    return m;
}
int main()
{
    Sample S;
    S.getdata();
    cout<<"Mean: "<<mean(S)<<endl;
}