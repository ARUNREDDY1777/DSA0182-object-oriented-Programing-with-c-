  #include <iostream>
  using namespace std;
  int main()
  {
  	double cel;
  	float fahr;
  	cout<<"enter the temperature :\n";
  	cin>>cel;
  	fahr=(9/5)*cel;
  	fahr=fahr+32;
  	
    cout << "fahrenheit  of given cels is : "<<fahr << endl;
	return 0;
}

