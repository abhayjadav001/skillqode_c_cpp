#include<iostream>
using namespace std;
void prime();
int main()
{
        prime();
        return 0;
}
void prime()
{
    int number,i,x=0;
    cout<<"Enter a number";
    cin>>"number";

        for(i=2 ; i<=number/2 ; ++i)
        {
            if(number % i==0)
            {
                x=1;
                break;            }
        }
}