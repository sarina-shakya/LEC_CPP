#include<iostream>
using namespace std;
void product(int x, int y)
{
    cout<<"product= " << (x*y)<<endl;
}
void product(double x, double y)
{
    cout<<"product= " <<(x*y)<<endl;
}

int main()
{
    product(3,5);
    product(4.3,5.5);

    return 0;
}