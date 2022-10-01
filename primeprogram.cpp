#include<iostream>
using namespace std;
int main()
{
    int x,i,y=0,z=0;

    cout<<"enter your number  :";
    cin>>x;
    y=x/2;

   for(i=2;i<=y;i++)
    {
     if(x % i==0)
     {
         cout<<" number is not  prime."<<endl;
         z = 1;

         break;


    }

    }
     if(z==0)
     cout<<"number is prime."<<endl;
  return 0;
   
}
