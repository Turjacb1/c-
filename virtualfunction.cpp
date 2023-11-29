#include<iostream>
using namespace std;
class base
{
    
    public:
    int i;
    base(int x){i=x;}
    virtual void fun()
    {
        cout<<"using base function"<<endl;
        cout<<i<<endl;
    }
};
class derived1:public base
{
    public:
    derived1(int x):base(x){}
    void fun()
    {
        cout<<"using derived1 function"<<endl;
        cout<<i*i<<endl;
    }
};
class derived2:public base
{
    public:
    derived2(int x):base(x){}
    void fun()
    {
        cout<<"usng derived2 function"<<endl;
        cout<<i+i<<endl;
    }
};
int main()
{
    base *p;
    base ob(10);
    derived1 ob1(10);
    derived2 ob2(10);
    p=&ob;
    p->fun();
    p=&ob1;
    p->fun();
    p=&ob2;
    p->fun();

}