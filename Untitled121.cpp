#include <iostream>
using namespace std;  
  
int main()  
{  
    int i,j,n,m,k;  
   cout<<"Enter the number of rows";  
   cin>>n;  
    m=n;  
   for(i=1;i<=n;i++)  
   {  
       for(j=1;j<i;j++)  
       {  
           cout<<" ";  
       }  
       for(k=1;k<=m;k++)  
       {  
           cout<<"*";  
       }  
       m--;  
     
    cout<<"\n";  
    }  
    return 0;  
}  
