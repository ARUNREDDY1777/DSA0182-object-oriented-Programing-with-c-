#include<iostream>
using namespace std;
void prime(int n,int i,int count=0)
{
	if(n==0)
	{
	cout<<"is not a prime";
   }
   else
   {
   	for(i=1;i<=n;i++)
   	{
   		if(n%i==0)
   		count++;
   		{
   			if(count==2)
   			cout<<"is a prime\n";
   			else
   			cout<<"is not a prime\n";
		   }
	   }
	}
}
int main()
{
	int n;
	int i;
	cout<<"enter the number:";
	cin>>n;
	prime(n,i);
}

