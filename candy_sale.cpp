// Program:			Candy Sale
// Author:			Ilya Babenko - w1793796
// Date:			01/24/2023 - Spring 2023 - T/Th @ 1pm
// Description:		Displays total cost to purchase
//					some number of pounds of candy.
//
// Here is the original step-by-step solution:
//												1. Declare 'pounds' as Integer.
//												2. Declare 'total' as Float.
//												3. Record the amount of truffles in the variable
//												   named 'pounds'.
//												4. If 'pounds' is five or less, go to the next step;
//												   otherwise, go to Step 7.
//												5. Set 'total' to 'pounds' times 20.
//												6. Go to Step 10.
//												7. Set 'total' to 100.
//												8. Subtract 5 from 'pounds'.
//												9. Multiply 'pounds' by 12 and add it to 'total'.
//												10. End.

#include <iostream>
#include <iomanip>


void input_data(float& pounds);
void preform_calculations(float pounds, double& subtotal, double& total, double tax, float& excess_pound, float &first_five_pounds);
void output_results(double subtotal, double total, double tax, float excess_pounds, float first_five_pounds);

int main()
{
	float pounds;
	float first_five_pounds;
	float excess_pounds = 0;
	double subtotal;
	double tax = 7.25;
	double total;

	input_data(pounds);
	preform_calculations(pounds, subtotal, total, tax, excess_pounds, first_five_pounds);
	output_results(subtotal, total, tax, excess_pounds, first_five_pounds);

}




// An input module that reads how many pounds of
// candy the customer wants to purchase.

void input_data(float& pounds)
{
	std::cout << "Welcome to Elias's Candy Shop!" << std::endl;
	std::cout << "Please enter amount of candy purchased in pounds: ";
	std::cin >> pounds;
}



// A module that calculates the customers total based on how many pounds they are buying and items set price.

void preform_calculations(float pounds, double& subtotal, double& total, double tax, float &excess_pounds, float &first_five_pounds)
{
	if (pounds <= 5)
	{
		first_five_pounds = pounds;
		subtotal = pounds * 20;
		total = ((subtotal * (tax * 0.01)) + subtotal);
	}
	else
	{
		first_five_pounds = 5;
		excess_pounds = pounds - 5;
		subtotal = (excess_pounds * 12) + 100;
		total = ((subtotal * (tax * 0.01)) + subtotal);
	}
}




// A module that displays the subtotal, the tax, and the total.

void output_results(double subtotal, double total, double tax, float excess_pounds, float first_five_pounds)
{
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::setw(27) << "Elias's Candy Shop" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout <<  std::setw(12) << "- Truffles" << std::endl;
	std::cout << std::endl;
	std::cout << std::fixed << std::setprecision(2) << std::setw(12) << first_five_pounds << " lb" << " @ $20.00/lb" << std::endl;
	std::cout << std::endl;
	std::cout << std::fixed << std::setprecision(2) << std::setw(12) << excess_pounds << " lb" << " @ $12.00/lb" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::setw(18) << std::fixed << std::setprecision(2) << "Subtotal: $" << subtotal << std::endl;
	std::cout << std::setw(17) << std::fixed << std::setprecision(2) << "Sales Tax: " << tax << '%' << std::endl;
	std::cout << std::setw(18) << std::fixed << std::setprecision(2) << "Total: $" << total << std::endl;
	std::cout << "-------------------------------------" << std::endl;
}
