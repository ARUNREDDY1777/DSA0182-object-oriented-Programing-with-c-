#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i;
    cout<<"Enter the range of number:";
    cin>>n;

for(i=1;i<=n;i+2)
   // while(i<=n)
    {
        sum+=i;
      // i+=2;
    }
    cout<<"The sum of the series = "<<sum;
}
