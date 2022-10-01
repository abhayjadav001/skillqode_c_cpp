#include<iostream>
#include<string>
using namespace std;
void mystring(string newstr)
{
    cout<<"hello,"<<str<<" welcome to skillqode!\n";
}
int main()
{
    string str;
    cout<<"enter your name :\n";
    getline(cin,str);
    mystring (str);
    return 0;
}