#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,rem=0,temp=0;
	cout<<"enter the number:";
	cin>>n;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
		cout<<sum;
	}
	return 0;
}
