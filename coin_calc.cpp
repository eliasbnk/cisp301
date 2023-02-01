// Program:			Coin Calculator
// Author:			Ilya Babenko - w1793796
// Date:			01/31/2023 - Spring 2023 - T/Th @ 1pm
// Description:		Calculate and displays the total change
//					based on amount of coins a user has.

#include<iostream>
#include<iomanip>

void input_data(int &amount_of_quarters, int &amount_of_dimes, int &amount_of_nickels, int &amount_of_pennies);
void perform_calculations(int amount_of_quarters, int amount_of_dimes, int amount_of_nickels, int amount_of_pennies, double &total_change);
void output_results(int amount_of_quarters, int amount_of_dimes, int amount_of_nickels, int amount_of_pennies, double total_change);



int main(){
    int amount_of_quarters, amount_of_dimes, amount_of_nickels, amount_of_pennies;
    double total_change;
    input_data(amount_of_quarters, amount_of_dimes, amount_of_nickels, amount_of_pennies);
    perform_calculations( amount_of_quarters,  amount_of_dimes, amount_of_nickels, amount_of_pennies, total_change);
    output_results( amount_of_quarters,  amount_of_dimes, amount_of_nickels, amount_of_pennies, total_change);
    return 0;
}

//
// An input module that recieves data about how many of each coins does a user has.
//

void input_data(int &amount_of_quarters, int &amount_of_dimes, int &amount_of_nickels, int &amount_of_pennies){
    std::cout << "Enter number of quarters: ";
    std::cin >> amount_of_quarters;
    std::cout << "Enter number of dimes   : ";
    std::cin >> amount_of_dimes;
    std::cout << "Enter number of nickels : ";
    std::cin >> amount_of_nickels;
    std::cout << "Enter number of pennies : ";
    std::cin >> amount_of_pennies;
};

//
// A processing module that computes the total change based on the given data.
//

void perform_calculations(int amount_of_quarters, int amount_of_dimes, int amount_of_nickels, int amount_of_pennies, double &total_change){
    double change;
    change = (amount_of_quarters * 25) + (amount_of_dimes * 10) + (amount_of_nickels * 5) + amount_of_pennies;
    total_change = change * 0.01;
};

//
// An output module that displays the computed total change to the user.
//

void output_results(int amount_of_quarters, int amount_of_dimes, int amount_of_nickels, int amount_of_pennies, double total_change){
    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "With " << amount_of_quarters << " quarter(s), " << amount_of_dimes << " dime(s), " << amount_of_nickels << " nickel(s) and " << amount_of_pennies << " penn(y/ies), you have $" << total_change << " in change." << std::endl;
};
