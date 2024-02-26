#include<iostream>
using namespace std;
int main(){

    int num,i,count=0,sum=0;

    for(num =1;num<=4;num++){

         count = 0;
     for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
         if(count==2 && num!= 1)
		 sum = sum + num;
    }
     cout << "the Sum of two prime numbers is: " << sum;
     return 0;
}

