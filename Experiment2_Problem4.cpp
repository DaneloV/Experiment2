#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout << "\nThis program will count numbers up to 10, and when it reaches 10, it will count by 2s until it reaches 30." << endl;
	
	int x;
	cout << "\nCounting...\n" << endl;

	for (x = 1; x < 10; x++)
	{
		cout << x << " , ";
	}

	for (x = 10; x >= 10, x <= 30; x += 2)
	{
		cout << x << " , ";
	}

getch ();
return 0;
}