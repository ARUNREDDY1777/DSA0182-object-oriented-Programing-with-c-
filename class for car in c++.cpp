#include<iostream>
using namespace std;
class car
{
	char car_name[20];
	int price;
	int model_year;
	char colour[20];
	public:
		car()
		{
			cout<<"enter the name of the car:";
			cin>>car_name;
			cout<<"enter the price of the car:";
			cin>>price;
			cout<<"enter the model of the year :";
			cin>>model_year;
			cout<<"enter the colour of the car:";
			cin>>colour;
		}
		void display()
		{
			cout<<"\n"<<"CAR NAME :  "<<car_name<<"\t"<<"\n"<<"PRICE :     "<<price<<"\t"<<"\n"<<"MODEL YEAR :  "<<model_year<<"\t"<<"\n"<<"COLOUR :   "<<colour;
		}
};
int main()
{
	car c;
	c.display();
	return 0;
}
