#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	cout << "This program will generate the sum of all whole numbers starting from 1 up to a given number." << endl;

	int n, sum = 0;
	
	do
	{
		cout << "\nEnter a number: "; 
		cin >> n;

	if(n <= 0)
	{
		cout << "\nThank you.";
		break;
	}

	else
 	{    
	int i = 1;
	
	while(i <= n)
	{
		sum=sum+i;
		i++;
	}	

	cout<< "\nThe sum of all whole numbers from 1 to " << n << " is " << sum << ". " << endl;
	}
		sum = 0;
	} 
	while (n!=0);  
 
getch ();
return 0;
}

