#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"enter a :",i;
        cin>>a[i];
    }
    cout<<"your array is \n\n";
    for(i=0;i<5;i++)
    {

        cout<<"\n A :"<<a[i];
    }

}