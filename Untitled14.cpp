#include<iostream>
using namespace std;
int main()
{
	int i,num=0,arr[6]={1,2,3,2,3,1};
	for(i=0;i<6;i++)
	{
		num ^=arr[i];
		
	}
	cout<<num;
}
