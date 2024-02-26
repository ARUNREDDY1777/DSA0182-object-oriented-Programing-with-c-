#include<iostream>
using namespace std;
void even(int n)
{
	if(n%2==0)
	cout<<n<<" is a even number";
	else
	cout<<n<<" is a odd number";
}
int main()
{
	int a;
	cout<<"enter the number:";
	cin>>a;
	even(a);
}
