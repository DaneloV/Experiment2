#include<iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	int x;
	double y, v, num, num1;
 	const double z = 2.5;

	cout <<"\nInput the value of x: ";
	cin>> x;
	cout << "\nInput the value of y: ";
	cin>>y;

	switch(x)
	{
 		case 1: 
  		if(y > 1 && y < 5)
  		{
    		v = x*y*z;
    		cout << "\nV is equal to: " << setw(10) << v << setprecision(2);
  		}
  		else if (y >= 5)
  		{
    		v = x + (y / z);
    		cout << "\nV is equal to: " << setw(10) << v << setprecision(2);
  		}
  		else
  		{		
    		v = x+y+z;
    		cout << "\nV is equal to: " << setw(10) << v << setprecision(2);
 		}
  		break;
  
 		case 2:
  		if(y <= 5)
  		{
    		num1 = (x-y) / z;
    		v = abs(num1);
    		cout << "\nV is equal to: " << setw(10) << v << setprecision(2);
  		}
  		
		else if (y > 5)
  		{	  		
    		num = sqrt(y+z);
    		v = x-num;
    		cout << "\nV is equal to: " << setw(10) << v << setprecision(2);
  		}	
  		
  		else
  		{	
   			 v = x+y+z;
    		cout << "\nV is equal to: " << setw(10) << v << setprecision(2);
  		}
  		break;

 		default:
  		v = x+y+z;
  		cout << "\nV is equal to: " << setw(10) << v << setprecision(2);
	}
	
	getch ();
	return 0;
}
