#include<iostream>
using namespace std;
class increase
{
//	private:
        public: //access spciffier 
		int value;
		//public:
			increase()
			{
			value=100;
				
			}
			void operator ++()
			{
				value=value+22;
			}
			void display()
			{
				cout<<"the value is :"<<value<<"\n";
			}
};
int main()
{
	increase inc;
	++inc;
	inc.display();
	return 0;
}
