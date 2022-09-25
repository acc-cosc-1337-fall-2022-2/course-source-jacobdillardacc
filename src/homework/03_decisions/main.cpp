//write include statements
#include "decisions.h"
#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main() 
{
	int grade;
	int choice;
	string letter_grade;

	cout<<"   MAIN MENU\n\n";
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n\n";

	cout<<"Select Number: ";

	cin>>choice;

	if (choice == 1){
		cout<<"\nEnter grade in range 0-100: ";
		cin>>grade;
		letter_grade = get_letter_grade_using_if(grade);
		cout<<"\nLetter grade: ";
		cout<<letter_grade;}
	
	else if (choice == 2){
		cout<<"\nEnter grade in range 0-100: ";
		cin>>grade;
		letter_grade = get_letter_grade_using_switch(grade);
		cout<<"\nLetter grade: ";
		cout<<letter_grade;}

	else{
		exit(0);}

		return 0;


	return 0;
}