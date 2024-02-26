#include<iostream>
using namespace std;
int main()
{
	char s;
	cout<<"enter the letter:";
	cin>>s;
	if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
	cout<<s<<" is a vowel letter";
	else
	cout<<s<<" is a consonant letter";
}
