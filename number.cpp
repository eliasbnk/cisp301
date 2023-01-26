// Program    : Add 2 numbers
// Author     : Ilya Babenko - w1793796
// Date       : Spring 2023 - T/Th @ 1:00pm
// Description: This program adds 2 numbers together;

#include <iostream>

void welcome();
void input_data(double& a, double& b);
void perform_calculations(double a, double b, double &c);
void output_results(double a, double b, double c);



int main()
{
	double a, b, c;

	welcome();
	input_data(a, b);
	perform_calculations(a, b, c);
	output_results(a, b, c);
}

//
// An output module that displays information about the program.
//

void welcome()
{
	std::cout << "This program computes and displays the" << std::endl;
	std::cout << "sum of two numbers" << std::endl;
	std::cout << "A + B = C" << std::endl;
	std::cout << std::endl;
	std::cout << "You will be prompted to input the two" << std::endl;
	std::cout << "addends A and B." << std::endl;
	std::cout << std::endl;
}

// An input module that gets the addends.

void input_data(double& a, double& b) {
	std::cout << "Enter addend 'A': ";
	std::cin >> a;
	std::cout << "Enter addend 'B': ";
	std::cin >> b;
}

//
// A processing module that computes the sum of the addends,
// provided by the user.
//

void perform_calculations(double a, double b, double& c) {
	c = a + b;
}

//
// An output module that displays the sum.
//

void output_results(double a, double b, double c) {
	std::cout << std::endl;
	std::cout << "The sum of "
		<< a << " and "
		<< b << " is "
		<< c << std::endl;
}
