// Program: Convert Farenheits to Celsius
// Author: Ilya Babenko
// Date: Spring 2023 - T/Th @ 1pm

#include <iostream>
#include <iomanip>

void input_data(double &fTemp);
void perform_calculations(double fTemp, double &cTemp);
void output_results(double cTemp, double fTemp);
int main()
{
    double cTemp, fTemp;
    input_data(fTemp);
    perform_calculations( fTemp, cTemp);
    output_results(cTemp,fTemp);
}

void input_data(double &fTemp){
    std::cout << std::setw(53) << "Farenheit to Celsius Converter" << std::endl << std::endl;
    std::cout << "Please provide the temperature in Farenheit to be converted to Celsius." << std::endl;
    std::cout << "Enter temp in F (ex: 32, 68, 98.6, 212): ";
    std::cin >> fTemp;
}

void perform_calculations(double fTemp, double &cTemp )
{
    cTemp =  (fTemp - 32) * 5 / 9;
}

void output_results(double cTemp, double fTemp) {
    std::cout << std::endl;
    std::cout << "Calculating..." << std::endl;
    std::cout << std::endl;
    std::cout << std::fixed
              << std::setprecision(1) << fTemp << "F is " << cTemp << "C" << std::endl;
}
