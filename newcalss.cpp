#include<iostream>
using namespace std;
class Student 
{
    int i,name,rollno,Gujrati,Maths,science,mark;
    float per,total;
    char grade;
    public:
    void setData()
    {
      
        {   
            cout<<" Enter rollno  :";
            cin>>rollno;

             cout<<"\nEnter name  :";
             cin>>name;

            cout<<"\nEnter Gujrati  :";
            cin>>Gujrati;

            cout<<"\nEnter Maths  :";
            cin>>Maths;

            cout<<"\nEnter science  :";
            cin>> science;
        }
    }
    void getData()   
    {
        cout<<"rollno"<<rollno;
        cout<<"name"<<name;
        cout<<"Gujrati"<<Gujrati;
        cout<<"Maths"<<Maths;
        cout<<"science"<<science;
    }  
};
int main()
{
     Student obj1;
     obj1.setData();
     
}