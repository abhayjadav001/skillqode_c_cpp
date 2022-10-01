#include<iostream>
using namespace std;
class Company
{
	int Salary,Bonus,Hours;
	string name;
	public:
	void Employee()
	{
		cout<<"\n Employee Name :";
		cin>>name;
	}
	void TotalHour()
	{
		cout<<"\n enter Hours  :";
		cin>>Hours;
	}
	void EmpBonus()
	{
		Bonus=Hours*10/100;
	}
	
};
int main()
{
	Company emp1;
	emp1.Employee();
	emp1.TotalHour();
	emp1.EmpBonus();
	//emp1.EmpSalary();
}
