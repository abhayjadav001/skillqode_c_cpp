#include<iostream>
#include<string.h>
using namespace std;
class Bank
{
    int i;
    int withdraw,deposit,totalnotrans,totalnowith,totalwith,totaldepo,accountbalance=25000;
    float totalamount,total;
    string name;
    public:
    void Information()
    {   
       
        cout<<"Enter Customer Name :";
        cin>>name;
        cout<<"withdraw amount :";
        cin>>withdraw;
        cout<<"Deposit amount :";
        cin>>deposit;                                                  
         

    }

    void TotalAmount()
    {
        totalamount=accountbalance+deposit-withdraw;
        cout<<"Total Amount :"<<totalamount;
        totalnotrans=withdraw+deposit;
        cout<<"\n total trancetion :"<<totalnotrans;                      
    }
    
};
int main()
{
    Bank obj1;
    obj1.Information();
    obj1.TotalAmount();
}