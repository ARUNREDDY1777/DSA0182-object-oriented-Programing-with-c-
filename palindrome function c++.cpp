#include<iostream>
using namespace std;
void palindrome(int n)
{
	int r,s=0,t;
	t=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
		}

	    if(s==n)
		cout<<n<<" is a palindrome number";
		else
		cout<<n<<" is not a palindrome number";
		
}

int main()
{
	int a;
	cout<<"enter the number:";
	cin>>a;
	palindrome(a);
}
