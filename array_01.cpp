#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"enter a :",i;
        cin>>a[i];
        
    }
    for(i=0;i<5;i++)
    {
        cout<<"enter b :",i;
        cin>>b[i];
        
    }
    cout<<"your array is \n\n";
    for(i=0;i<5;i++)
    {

        cout<<"\n A :"<<a[i];
    }   
    for(i=0;i<5;i++)
    {
         cout<<"\n B :"<<b[i];
    }

}