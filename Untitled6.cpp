#include<iostream>
using namespace std;
int main()
{
	string s;
	cout<<"enter the string:";
	cin>>s;
	if(s=="()"&&"[]"&&"{}"&&"(){}[]")
		cout<<"is a valid parentheses"<<s;
		else
		cout<<"is not a valid"<<s;
}
