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


void prompt_pounds(int &pounds);
void calc_total(int pounds, float &subtotal, float &total, float tax);
void print_total(float subtotal, float total, float tax);

int main()
{
	int pounds;
	float subtotal;
	float tax = 7.25;
	float total;

	prompt_pounds(pounds);
	calc_total(pounds, subtotal, total, tax);
	print_total(subtotal, total, tax);

}




// An input module that reads how many pounds of
// candy the customer wants to purchase.

void prompt_pounds(int &pounds)
{
	std::cout << "Enter pounds of candy: ";
	std::cin >> pounds;
}



// A module that calculates the customers total based on how many pounds they are buying and items set price.

void calc_total(int pounds, float &subtotal, float &total, float tax)
{
	if (pounds <= 5)
	{
		subtotal = pounds * 20;
		total = ((subtotal * (tax * 0.01)) + subtotal);
	}
	else
	{
		subtotal = ((pounds - 5) * 12) + 100;
		total = ((subtotal * (tax * 0.01)) + subtotal);
	}
}




// A module that displays the subtotal, the tax, and the total.

void print_total(float subtotal, float total, float tax)
{
	std::cout << "Subtotal: $" << subtotal << std::endl;
	std::cout << "Sales Tax: " << tax << '%' << std::endl;
	std::cout << "Total: $" << total << std::endl;
}

