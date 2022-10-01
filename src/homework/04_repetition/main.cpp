//write include statements
#include "dna.h"

//write using statements
using std::cin;
using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice = 0;
	char user_input;
	int num1;
	int num2;

	do
	{
		cout<<"     MENU\n\n";
		cout<<"1-Factorial\n";
		cout<<"2-Greatest Common Divisor\n";
		cout<<"3-Exit\n\n";
		cout<<"Menu Choice: ";
		cin>> choice;

		if (choice == 1)
		{
			do{
				cout<<"\nEnter a number: ";
				cin>> num1;
				cout<<"\nFactorial of " << num1 <<" is " << get_factorial(num1);
				cout<<"\nReturn to MENU? (y/n) ";
				cin>> user_input;

				if (user_input == 'y' || user_input == 'Y')
				{
					choice = 0;
				} 
				else if (user_input == 'n' || user_input == 'N')
				{
					choice = 1;
				}
			}
			while (choice == 1);
		}
		
		else if (choice == 2)
		{
			do{
				cout<<"\nEnter two numbers:\n";
				cout<<"Number 1: ";
				cin>> num1;
				cout<<"\nNumber 2: ";
				cin>> num2;
				cout<<"\nGreatest common divisor of " << num1 <<" and " << num2
				<<" is " << get_gcd(num1, num2);
				cout<<"\nReturn to MENU? (y/n) ";
				cin>> user_input;
				
				if (user_input == 'y' || user_input == 'Y')
				{
					choice = 0;
				}
				else
				{
					choice = 2;
				}
			}
			while (choice == 2);
		}
		else if (choice == 3)
		{
			cout<<"\nAre you sure you want to exit? (y/n) ";
			cin>> user_input;

			if (user_input == 'y' || user_input == 'Y')
			{
				choice = 3;
			}
			else if (user_input == 'n' || user_input == 'n')
			{
				choice = 0;
			}
		}
	}
	while(choice != 3);
	return 0;
}