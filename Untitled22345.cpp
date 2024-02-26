#include<iostream>
using namespace std;
int main()
{
	int n,i,arr[5];
	cout<<"enter the number:";
	cin>>n;
	for(i=4;i>=0;i--)
	{
	arr[i]=n%10;
		n=n/10;
	}
	cout<<arr[5];
	return 0;
}
