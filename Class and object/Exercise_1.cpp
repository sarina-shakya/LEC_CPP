#include<iostream>
using namespace std;

class iteminfo
{
    private:
        int itemid;
        float cost;
    public:
        void setdata (int it,float cst)
        {
            itemid=it;
            cost=cst;
        }
        void showdata()
        {
            cout<<"\nitem ID:"<<itemid;
            cout<<"\nCost:"<<cost<<endl;
        }
};
int main()
{
    iteminfo i1,i2;
    i1.setdata(55,30.50);
    i2.setdata(555,130.25);

    cout<<"\nInformation on first item";
    i1.showdata();

    cout<<"\nInformation on second item";
    i2.showdata();
    return 0;
}