// Program    : Quadratic Equation (starter file)
// Author     : Ilya Babenko - w1793796
// Date       : Spring 2023 - T/Th @ 1:00pm
// Description: This program solves quadratic equations having real roots.

#include <iostream>
#include <cmath>

 void welcome();
 void input_data(double& a, double& b, double& c);
 void perform_calculations(double a, double b, double c,
	    double& root1, double& root2);
 void output_results(double a, double b, double c,
	    double root1, double root2);

 int main()
 {
	    double a, b, c;       // coefficients of Ax^ + Bx + C =
	    double root1 , root2;  // roots of the equation

		welcome();
	    input_data(a, b, c);
	    perform_calculations(a, b, c, root1, root2);
	    output_results(a, b, c, root1, root2);
		return 0;
	 }

 //
 // An output module that displays information about the program.
 //
 void welcome()
 {
	    std::cout << "This program computes and displays the" << std::endl;
	    std::cout << "roots of a second-degree polynomial" << std::endl;
	    std::cout << "equation of the form Ax^ + Bx + C = ." << std::endl;
	    std::cout << std::endl;
	    std::cout << "You will be prompted to input the three" << std::endl;
	    std::cout << "coefficients A, B, and C." << std::endl;
	    std::cout << std::endl;
	    std::cout << "This program acts unpredictably when" << std::endl;
	    std::cout << "given coefficients that do not produce" << std::endl;
	    std::cout << "real-valued roots." << std::endl;
	    std::cout << std::endl;
	}

// An input module that gets the coefficients of a second-degree polynomial
// in the form Ax^ + Bx + C
//
void input_data(double& a, double& b, double& c)
{
	    std::cout << "Enter coefficient 'A': ";
	    std::cin >> a;
	    std::cout << "Enter coefficient 'B': ";
	    std::cin >> b;
	    std::cout << "Enter coefficient 'C': ";
	    std::cin >> c;
	}

//
 // A processing module that computes the real-valued roots of the equation,
 // given its coefficients.
 //
 void perform_calculations(double a, double b, double c,
	    double& root1, double& root2)
	 {
	 double disc; // discriminant - local variable
	 double sqrt_disc; // sqare root of discriminate

	 disc = (b * b) - (4 * a * c);
	 sqrt_disc = sqrt(disc);
	 root1 = ( - b + sqrt_disc) / (2 * a);
	 root2 = ( - b - sqrt_disc) / (2 * a);

	}

 //
 // An output module that displays the equation and its roots.
 //
 void output_results(double a, double b, double c,
	    double root1, double root2)
	 {
	    std::cout << std::endl;
	    std::cout << "The roots of the equation "
		 << a << "x^ + "
		 << b << "x + "
		 << c << std::endl;
	    std::cout << "are " << root1 << " and " << root2 << std::endl;
	}
