#include<iostream>
using namespace std;
void prime(int n)
{
	int c=0,i;
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if (c==2)
	cout<<n<<" is a prime number";
	else
	cout<<n<<" is a composite number";
}
int main ()
{
	int a;
	cout<<"enter a:\n";
	cin>>a;
	prime(a);
}

