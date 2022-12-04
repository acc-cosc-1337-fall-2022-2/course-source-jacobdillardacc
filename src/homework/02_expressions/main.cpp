//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cin, std::cout;


int main() {

    double meal_amount, tip_rate, tip_amount, tax_amount, total;

    cout << "Enter cost of meal: ";
    cin >> meal_amount;
    tax_amount = get_sales_tax_amount(meal_amount);

    cout << "\nEnter tip percentage: ";
    cin >> tip_rate;
    tip_rate = tip_rate / 100;
    tip_amount = get_tip_amount(meal_amount, tip_rate);

    total = meal_amount + tax_amount + tip_rate;

    cout << "\nMeal Amount: $" << meal_amount;
    cout << "\nSales Tax:   $" << tax_amount;
    cout << "\nTip Amount:  $" << tip_amount;
    cout << "\nTotal:       $" << total;


    return 0;
}
