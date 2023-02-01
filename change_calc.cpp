// Program:			Money Counting Calculator
// Author:			Ilya Babenko - w1793796
// Date:			01/31/2023 - Spring 2023 - T/Th @ 1pm
// Description:		Calculate the minimum dollar bills and coins required
//					to make a given amount.

#include<iostream>
#include<iomanip>

void input_data(double &change_amount);
void perform_calculations(double change_amount,int &amount_of_hundred_dollar_bills, int &amount_of_fifty_dollar_bills, int &amount_of_twenty_dollar_bills, int &amount_of_ten_dollar_bills, int &amount_of_five_dollar_bills, int &amount_of_one_dollar_bills, int &amount_of_quarters, int &amount_of_dimes, int &amount_of_nickels, int &amount_of_pennies);
void output_results(double change_amount,int amount_of_hundred_dollar_bills, int amount_of_fifty_dollar_bills, int amount_of_twenty_dollar_bills, int amount_of_ten_dollar_bills, int amount_of_five_dollar_bills, int amount_of_one_dollar_bills, int amount_of_quarters, int amount_of_dimes, int amount_of_nickels, int amount_of_pennies );



int main(){
    int amount_of_hundred_dollar_bills, amount_of_fifty_dollar_bills, amount_of_twenty_dollar_bills, amount_of_ten_dollar_bills, amount_of_five_dollar_bills, amount_of_one_dollar_bills, amount_of_quarters,  amount_of_dimes, amount_of_nickels, amount_of_pennies;
    double change_amount;
    input_data(change_amount);
    perform_calculations(change_amount, amount_of_hundred_dollar_bills, amount_of_fifty_dollar_bills, amount_of_twenty_dollar_bills, amount_of_ten_dollar_bills, amount_of_five_dollar_bills, amount_of_one_dollar_bills, amount_of_quarters,  amount_of_dimes, amount_of_nickels, amount_of_pennies);
    output_results(change_amount, amount_of_hundred_dollar_bills, amount_of_fifty_dollar_bills, amount_of_twenty_dollar_bills, amount_of_ten_dollar_bills, amount_of_five_dollar_bills, amount_of_one_dollar_bills, amount_of_quarters,  amount_of_dimes, amount_of_nickels, amount_of_pennies);
    return 0;
}

//
// An input module that recieves the total amount user has.
//

void input_data(double &change_amount){
    std::cout << std::setw(30) << "Money Counter" << std::endl;
    std::cout << std::endl;
    std::cout << "money counter will take any amount of dollars" << std::endl;
    std::cout << "( under 21,474,836.47 )" << std::endl;
    std::cout << "and calculate the minimum dollar bills and coins" << std::endl;
    std::cout << "required to make that amount." << std::endl;
    std::cout << std::endl;
    std::cout << "Enter total: ";
    std::cin >> change_amount;
};

//
// A processing module that computes the minimum amount of dollar bills and coins required to make the given total.
//

void perform_calculations(double change_amount,int &amount_of_hundred_dollar_bills, int &amount_of_fifty_dollar_bills, int &amount_of_twenty_dollar_bills, int &amount_of_ten_dollar_bills, int &amount_of_five_dollar_bills, int &amount_of_one_dollar_bills, int &amount_of_quarters, int &amount_of_dimes, int &amount_of_nickels, int &amount_of_pennies){
    int total = change_amount * 100 + 0.5;
    int rhd, rq, rd, rn, rp, rod, rfd, rtd, rtwd, rffd,rohd; // <--- remainders
    rohd = total % 10000;
    amount_of_hundred_dollar_bills = (total - rohd) / 10000;
    rffd = rohd % 5000;
    amount_of_fifty_dollar_bills = (rohd - rffd) / 5000;
    rtwd = rffd % 2000;
    amount_of_twenty_dollar_bills = (rffd - rtwd) / 2000;
    rtd = rtwd % 1000;
    amount_of_ten_dollar_bills = (rtwd - rtd) / 1000;
    rfd = rtd % 500;
    amount_of_five_dollar_bills = (rtd - rfd) / 500;
     rod = rfd % 100;
    amount_of_one_dollar_bills = (rfd - rod) / 100;
    rq = rod % 25;
    amount_of_quarters = (rod - rq) / 25;
    rd = rq % 10;
    amount_of_dimes = (rq - rd) / 10;
    rn = rd % 5;
    amount_of_nickels = (rd - rn) / 5;
    rp = rn % 1;
    amount_of_pennies = (rn - rp) / 1;
};

//
// An output module that displays to the user the computed amount of dollar bills and coins required to make the given total.
//

void output_results(double change_amount,int amount_of_hundred_dollar_bills, int amount_of_fifty_dollar_bills, int amount_of_twenty_dollar_bills, int amount_of_ten_dollar_bills, int amount_of_five_dollar_bills, int amount_of_one_dollar_bills, int amount_of_quarters, int amount_of_dimes, int amount_of_nickels, int amount_of_pennies ){
    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "To make the total $" << change_amount << " you will need:" << std::endl;
    std::cout << std::endl;
    std::cout << amount_of_hundred_dollar_bills << " hundred-dollar bill(s)" << std::endl;
    std::cout << amount_of_fifty_dollar_bills << " fifty-dollar bill(s)" << std::endl;
    std::cout << amount_of_twenty_dollar_bills << " twenty-dollar bill(s)" << std::endl;
    std::cout << amount_of_ten_dollar_bills << " ten-dollar bill(s)" << std::endl;
    std::cout << amount_of_five_dollar_bills << " five-dollar bill(s)" << std::endl;
    std::cout << amount_of_one_dollar_bills << " one-dollar bill(s)" << std::endl;
    std::cout << amount_of_quarters << " quarter(s)" << std::endl;
    std::cout << amount_of_dimes << " dime(s)" << std::endl;
    std::cout << amount_of_nickels << " nickel(s)" << std::endl;
    std::cout << amount_of_pennies << " penn(y/ies)" << std::endl;
};
