#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char ch = 'A';
    for(i=65;i<=69;i++)
    {
        for(j=i;j>=65;j--)
        {
            cout<<"\t"<<(char)(j);
        }
    cout<<"\n";
    }

}