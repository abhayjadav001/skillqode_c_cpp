#include<iostream>
using namespace std;
//#include<string.h>
class company
{
    int name,salary,bonus;
    public:
    void name()
    {
        cout<<"enter emp name :";
        cin>>name;
    }
    void empsalary()
    {
        cout<<"enter emp salary :";
        cin>>salary;
    }
};
int main()
{
    company per1;
    per1.name();
    per1.empsalary();
}