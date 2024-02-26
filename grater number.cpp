//c++ program for grater number
//easy question no.8
//suedo code
/*
start program
declare the variables n1 and n2
check
if(n1>n2)
cout<<n1;
else
cout<<n2
end program
INPUT=enter the two numbers=3,5
OUTPUT=n2 is grater number 5
*/

 #include<iostream>
  using namespace std;
  int main()
{
	int n1,n2;
	cout<<"enter the two numbers:";
	cin>>n1>>n2;
	if(n1>n2)
	cout<<"\nn1 is grater number"<<" "<<n1;
	else
	cout<<"n2 is grater number"<<" "<<n2;
}
