#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	string package;
	double price, time;
	
	cout << "\nThe following program suggests an Internet service provider's 3 different subscription packages for its customers.\n" << endl;
	cout << "\nPackage A: For P995/mo 10 hrs of access are provided and the additional hours are P20/hr." << endl;
    cout << "\nPackage B: For P1495/mo 20 hrs of access are provided and the additional hours are P10/hr." << endl;
    cout << "\nPackage C: For P1995/mo of unlimited access is provided." << endl;
    
	cout << "\nPackage Type purchased: "; cin >> package;

	if (package == "A")
	{
		cout << "\nNumber of hours used: ";
		cin >> time;
				
		if (time <= 10)
			{
				price = 995;
			}
		else (time > 10);
			{
				price = 995 + (time - 10) * 20;
			}
	}
	
	if (package == "B")
	{
		cout << "\nNumber of hours used: ";
		cin >> time;
		
		if (time <= 20)
			{
				price = 1495;
			}
			else (time > 20);
			{
				price = 1495 + (time - 20) * 10;
			}
	}

	if (package == "C")
	{
		cout << "\nNumber of hours used: UNLIMITED" << endl;
		{
			price = 1995;
		}
	}

	cout << "\nAmount Due: " << price;

getch ();
return 0;
}
