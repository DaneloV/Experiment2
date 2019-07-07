#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	cout << "\nThis program computes a customer's water bill." << endl;

	int gallons;
	
	cout << "\nNumber of Gallons used: ";
	cin >> gallons;

	double waterdemandcharge = 35, consumptioncharge = 1.10, totalcharge = waterdemandcharge + (consumptioncharge * gallons), totallatecharge = totalcharge + 20, amountpaid;
	
	cout << "\nThe Total Bill is: " << totalcharge << endl;

	cout << "\nAmount of Payment: "; 
	cin >> amountpaid;

	if (amountpaid < totalcharge)
	{
		cout << "\nYour total bill is: " << totallatecharge << ", due to additional late charge fee of P20."; "\n" "Please pay the specified amount: "; 
		cin >> amountpaid;
		
		if (amountpaid < totallatecharge)
		{
			cout << "\nInsufficient payment. Please pay enough amount." << endl;
		}

			else
			{
				cout << "\nPayment accepted! You have a change of " << amountpaid - totallatecharge << "." << endl;
			}
	}

	else
	{
		cout << "\nPayment accepted! Your total bill is " << totalcharge << " with a change of " << amountpaid - totalcharge << " . " << endl;
	}
	
	cout << "\nThank you!!!" << endl;

getch ();
return 0;
}