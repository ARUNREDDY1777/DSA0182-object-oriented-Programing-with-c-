#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{

	try {
		int numerator;
		int denominator;
		int res;
		cout<<"enter the numerator: ";
		cin>>numerator;
		cout<<"enter the denpminator : ";
		cin>>denominator;
		if (denominator == 0)
		 {
			throw runtime_error("Division by zero not allowed!");
		}
    	res = numerator / denominator;
		cout << "Result after division: " << res <<"\n";
	}
	catch (const exception& e) 
	{
		cerr << "Exception " << e.what() <<"\n";
	}

	return 0;
}

