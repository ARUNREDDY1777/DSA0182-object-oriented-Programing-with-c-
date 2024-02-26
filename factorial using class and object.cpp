#include<iostream>
using namespace std;
class factorial
{

		int n;
		int i;
		int f=1;
       public:
	factorial()
	{
		cout<<"enter the number:";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		
	}
	void display()
	{
		cout<<"the factorial of the number is:"<<f;
	}
		
};
int main()
{
	factorial fal;
	fal.display();
	return 0;
	
}
