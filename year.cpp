// Program: Year do - a - ma - bob
// Author: Ilya Babenko
// Date: Spring 2023 - T/Th @ 1pm


#include <iostream>

void input_data(int& year);
void output_data(int year);
int main() {
	int year;
	input_data(year);
	output_data(year);
}

void input_data(int& year) {
	std::cout << "Enter the year you were born: ";
	std::cin >> year;
};
void output_data(int year) {
	std::cout << year << " was a great year!" << std::endl;
}
