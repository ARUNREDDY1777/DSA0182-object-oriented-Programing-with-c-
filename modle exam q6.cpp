#include<iostream>
using namespace std;
class employee
{
	public:
		char name[20];
		int id;
		int salary;
		int bonus=0;
		employee()
		{
	cout<<"enter the name of the employee:\n";
	cin>>name;
	cout<<"enter the id of the employee:\n";
	cin>>id;
	cout<<"enter the salary of the employee:\n";
	cin>>salary;5
	if(salary>45000)
	{
		bonus=40000;
		
	}
	
		salary=salary+bonus;
		 }
		 void display()
		 {
		 	cout<<"NAME :"<<name<<"\t"<<"\n"<<"EMPLOYEE ID : "<<id<<"\t"<<"\n"<<"BONUS : "<<bonus<<"\t"<<"\n"<<"SALARY : "<<salary<<"\t"<<"\n";
		 }
   };
   int main()
   {
   	employee emp;
   	emp.display();
   	return 0;
   }

