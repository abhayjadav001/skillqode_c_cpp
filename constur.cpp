#include<iostream>
using  namespace std;
class Bank
{

    int AccBalance;
    public:
    Bank()
    {
        AccBalance =1000;
        cout<<"\n default constructor called";
    }
    Bank(int intibal)
    {
        AccBalance = intibal;
        cout<<"\nparameterized constructor called";
    }
    Bank(int deposit)
    {
        deposit=4500;
        cout<<"\n your deposit  :";
    }
    void ShowAcoountBalance()
    {
        cout<<"\n AccountBalance   : "<<AccBalance;
    }

};
int  main()
{
    Bank Person1(1500),Person2(2500),person3;
    Person1.ShowAcoountBalance();
    Person2.ShowAcoountBalance();
    person3.ShowAcoountBalance();
}