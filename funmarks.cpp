#include<iostream>
using namespace std;
class Student
{
    int addno;
    string name;
    float eng,maths,sci,total;
    public:
    void addnumber()
    {
        cout<<" Enter a add no :";
        cin>>addno;
    }
    void Name()
    {
        cout<<"enter your  name  :";
        cin>>name;
    }
    void Sub()
    {
        cout<<" enter english :";
        cin>>eng;
        cout<<" enter maths :";
        cin>>maths;
        cout<<" enter sci :";
        cin>>sci;
    }
    void Sum()
    {
        total=eng+maths+sci;
    }
    void ctotal()
    {
        cout<<" \n add no :"<<addno;
        cout<<"\n your name :"<<name;
        cout<<" \n your eng :"<<eng;
        cout<<" \n your maths :"<<maths;
        cout<<"\n your science :"<<sci;
        cout<<"\n your all total  :"<<total;
    }
};
int  main()
{
    Student obj1;
    obj1.addnumber();
    obj1.Name();
    obj1.Sub();
    obj1.Sum();
    obj1.ctotal();
    
}

