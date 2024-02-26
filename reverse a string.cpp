#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, temp;
    int i = 0, j;
    cout << "Enter a string to check for Palindrome:\n ";
    cin >> str;
    temp = str;
    j = str.length()-1;
	while (i < j) 
    {
        swap(str[i], str[j]);
        i++;
        j--;
        {
        cout<<str;
    }
    }
    if (temp == str) 
    {
        cout << "The string is a palindrome." <<"\n";
    } 
    else 
    {
        cout << "The string is not a palindrome." <<"\n";
    }

    return 0;
}
