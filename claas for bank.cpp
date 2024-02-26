#include<iostream>
using namespace std;
class bank
{
	int acc_no;
	char name[10];
	int balance;
	int credite;
	float debit;
	float total=0;
	privet:
		bank()
		{
			cout<<"enter the account number:";
			cin>>acc_no;
			cout<<"enter the name:";
			cin>>name;
			cout<<"enter the balance:";
			cin>>balance;
			cout<<"enter the credite amount:";
			cin>>credite;
			cout<<"enter the debit amount:";
			cin>>debit;
			 total=(credite+balance)-debit;
		}
		
		void display()
		{
			cout<<"\n"<<"account number:"<<"\t"<<acc_no<<"\t"<<"\n"<<"Name         : "<<"\t"<<name<<"\n"<<" bank balance:    "<<balance<<"\n"<<"crediteded amount  : "<<"\t"<<credite<<"\n"<<"debited amount   :    "<<debit<<"\n"<<"remaining bank balance:"<<"\t"<<total;
		}
};
int main()
{
	bank b;
	b.display();
	return 0;
}
