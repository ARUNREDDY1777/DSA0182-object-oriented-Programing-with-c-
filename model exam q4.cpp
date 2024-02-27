#include <iostream>
using namespace std;
int main() 
{
    int rows,cols,i,j;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int **arr = new int*[rows];
    for (int i=0;i<rows;++i)
	 {
        arr[i]=new int[cols];
    }
    cout <<"Enter the values for the 2D array:"<<"\n";
    for (i=0;i<rows;++i) 
	{
        for (j=0;j<cols;++j)
		 {
            cout<<"Enter value for element ("<<i<<","<<j<< "): ";
            cin>>arr[i][j];
        }
    }
   cout <<"Values of the 2D array:"<<"\n";
    for (i=0;i<rows;++i)
	 {
        for (j=0;j<cols;++j)
		 {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for (i=0;i<rows;++i) 
	{
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

   

