#include<iostream>
using namespace std;
int main()
{
	int i,n,temp=0,rev,sum=0;
	cout<<"enter the number:";
	cin>>n;
	//temp=n;
	while(n>0)
	{
		rev=n%10;
		sum=sum+rev;
		n=n/10;
		cout<<sum;
		return 0;
	}
}
	
