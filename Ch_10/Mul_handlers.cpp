#include<iostream>
#define MAX 2
using namespace std;

class stack
{
    protected:
    int s[MAX];
    int top;

    public:
    class FULL      //full exception
    {};
    class EMPTY     //empty exception
    {};

    stack()
    {top=-1;}

    void push (int x)
    {
        if(top==MAX-1)
            throw FULL();
        else
            s[++top]=x;
    }

    int pop()
    {
        if (top==-1)
            throw EMPTY();
        else
        return s[top--];
    }

};

int main()
{
    stack s;
    try
    {
        s.push(11);
        s.push(22);
        s.push(33);
            //condition of throwing exception FULL
        cout<<"\n Number Popped"<<s.pop();
        cout<<"\n Number Popped"<<s.pop();
        cout<<"\n Number Popped"<<s.pop();
    }
    catch(stack::FULL)
    {
        cout<<"\nException: stack is Full"<<endl;
    }
    catch(stack::EMPTY)
    {
        cout<<"\nException: stack is Empty"<<endl;
    }

return 0;
}