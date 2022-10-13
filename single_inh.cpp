#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<" \n A constructor called....";
    }
     ~A()
    {
        cout<<" \n A destructor called....";
    }
};
class B : public A
    {
        public:
        B()
        {
        cout<<" \n A constructor called....";
        }
        ~B()
        {
             cout<<" \n B destructor called....";
        }
        
    };

int main()
{

    B b;
}
