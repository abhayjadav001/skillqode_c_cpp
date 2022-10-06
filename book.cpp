#include<iostream>
using namespace std;
class Library
{
    int bookno,totalcost;
    string booktitel;
    float price;
    public:
    
    void BookNum()
    {
        cout<<" enter a book numnber :";
        cin>>bookno;
    }
    void BookTitle()
    {
         cout<<" enter a book title :";
        cin>>booktitel;
    }
    void BookPrice()
    {
         cout<<" enter a price(per copy) :";
        cin>>price;
    }
    void TotalCost()
    {
        totalcost= bookno*price;
    }
    void BookInfo()
    {
        cout<<"\n book no :"<<bookno;
        cout<<"\n book titel :"<<booktitel;
        cout<<"\n book price :"<<price;
        cout<<"\n total cost :"<<totalcost;
    }
};
int  main()
{
    Library book1;
    book1.BookNum();
    book1.BookTitle();  *                                                                                                                                                                                                                                                                                                                                              
    book1.BookPrice();
    book1.TotalCost();
    book1.BookInfo();
    

}

