#include<iostream>
using namespace std;
void factorial(int i,int n,int f)
{
 for(i=1;i<=n;i++)
 {
 	f=f*i;
 	i++;
 }
 cout<<"the factorial of the number is:"<<f<<i;
}



int main
{
	int i;
	int n;
	int f=1;
	cout<<"enter the number:";
	cin>>n;
	factorial(i,n,f)
}
