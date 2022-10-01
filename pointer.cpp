#include<iostream>
using namespace std;
int main()
{
    int a=10,*b;
    cout<<"\n value a :"<<a;
    cout<<"\n address a :"<<&a;    

    b=&a;
    cout<<"\n value b/ address of a :"<<b;
    cout<<"\n address b :"<<&b;
    cout<<"\nvalue of using b :"<<*b;

}