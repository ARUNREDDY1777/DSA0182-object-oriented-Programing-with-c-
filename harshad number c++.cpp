#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,dig,temp=n;
	cout<<"enter the number:";
	cin>>n;
	while(n>0)
	{
		dig=n%10;
		sum=sum+dig;
		n=n/10;
	}
	//cout<<sum;
	if(n%sum==0)
	{
		cout<<temp<<"is a harshad number";
	}
		else
		cout<<temp<<"is not a harshad number";
	return 0;
}
