#include<iostream>
using namespace std;
class Bank
{
    int accBalance,withdrawal,Deposite;
    public:
     void getVal()
    {
       
       
        cout<<"\n Withdrawal :";
        cin>>withdrawal;

    }
    Bank()
    {
        accBalance=1000;
        cout<<"\n Default Constructor Called...";
        cout<<"\n Withdrawal :";
        cin>>withdrawal;

    }
    Bank(int initBal)
    {
        accBalance=initBal;
    }
    void Withdrawal()
    {
        cout<<"\n Withdrawal :"<<withdrawal;
        Deposite=accBalance-withdrawal;
        cout<<"\n Deposite :"<<Deposite;
        
    }
    void showAccountBalance()
    {
        cout<<"\n AccountBalance :"<<accBalance;
    }
};
int main()
{
    Bank Person1(100000);
    //Person1.getVal();
    Person1.showAccountBalance();
    Person1.getVal();
    Person1.Withdrawal();
   // Person1.showAccountBalance();
  // Person2.showAccountBalance();
  //  Person3.showAccountBalance();
}