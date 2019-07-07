#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout << "This is a program that will output the next 20 Fibonacci numbers (after 0 and 1) in one line, separated by commas." << endl;
	int n1 = 0, n2 = 1, n3, n4 = 2, n5 = 2 + 20;

	cout << "\nFibonacci Numbers: \n" << endl;
	cout << n1 << " , " << n2 << " , ";

	for (n4; n4 < n5; n4++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		cout << n3 << " , ";
	}

getch ();
return 0;
}