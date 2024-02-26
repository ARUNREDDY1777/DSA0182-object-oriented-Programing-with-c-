#include<iostream>
using namespace std;
void area(int n )
{
	 float area=(2*3.14*n);
	cout<<"the area of the circle is:"<<area;
}
int main()
{
	int a;
	cout<<"enter the r value:";
	cin>>a;
	area(a);
}
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	float area;
	cout<<"enter the number:\n";
	cin>>n;
	//while(n>0)
	area=2*3.14*n;
	cout<<"the area of the circle is :"<<area;
	return 0;
}*/
