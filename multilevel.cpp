#include<iostream>
#include<string.h>
using namespace std;

class student
{
    int rl;
    char nm[20];
    
    public:
    void read();
    void display();
};
class mark : public student
{
    protected :
    int s1;
    int s2;
    int s3;


    public:
    void getmark();
    void putmark();
};
class result : public marks
{
    int t;
    int p;
    char div[10];

    public:
    void process();
    void printresult();
};

void student :: read()
{
    cout<<"Enter RollNo : "<<endl;
    cin>>rl;
    cout<<"Enter  Name : "<<endl;
    cin>>nm;


}
void student :: display()
{
    cout<<" enter roll no :"<<rl<<endl;
    cout<<" enter name :"<<nm<<endl;
    cout<<"\n";
}
void marks :: getmark()
{
    cout<<"enter marks for 3 subject :"<<endl;
    cin>>s1>>s2>>s3;
}
void marks :: putmark()
{
    cout<<"subject 1 :"<<s1<<endl;
    cout<<"subject 2 :"<<s2<<endl;
    cout<<"subject 3 :"<<s3<<endl;
}
void result :: process()
{
    t =s1+s2+s3;
    p= t/3.0;
    p>=60? strcpy(div,"first") :p>=50? strcpy(div,"second"):strcpy(div,"third");
}
void result ::printresult()
{
    cout<<"total = "<<t<<endl;
    cout<<"\n";
    cout<<"persantage   ="<<p<<endl;
    cout<<"dividon   ="<<p<<endl;
}

int main()
{
    result x;
    x.reads();
    x.getmark();
    x.process();
    x.display();
    x.putmark();
    x.printresult();

    return 0;
}