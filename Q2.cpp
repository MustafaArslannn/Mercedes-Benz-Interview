#include "interview.h"
#include <iostream>
#include <vector>

// In this question, You are writing a program for an ATM that calculates how many bills of each value the ATM will give to a
// customer when they want to withdraw money.
// This program will focus only on a specific currency named Unit.Unit bills are different from other
// currencies, as they consist of the following values : 2 Units, 5 Units, 10 Units, 20 Units and 50 Units.
// Your program needs to take an integer input - amount of money customer wants to withdraw(A) - and
// an output consists of how many bills of each value should be given to the customer.
// This is a solution for this problem

void question_2() {
    // Declare a variable to store the amount to be withdrawn
    int amount = 0;

    // Prompt the user to enter the desired amount
    std::cout << "Please enter the required amount (Between 0-200 unit is allowed): ";
    std::cin >> amount;

    // Validate the input amount
    if (amount < 0 || amount > 200) {
        std::cout << std::endl << "Invalid amount" << std::endl;
        return; // Exit the function if the amount is invalid
    }

    // Define the available bill denominations
    std::vector<int> bills = { 50, 20, 10, 5, 2 };

    // Create a vector to store the count of each bill denomination
    std::vector<int> count(bills.size(), 0);

    // Calculate the optimal number of bills for each denomination
    for (int i = 0; i < bills.size(); ++i) {
        count[i] = amount / bills[i]; // Calculate the number of bills for the current denomination
        amount %= bills[i]; // Update the remaining amount
    }

    // Check if the ATM can provide the exact amount
    if (amount != 0) {
        std::cout << "ATM machine cannot be able to give the complete amount it gives " << amount << " unit bill less" << std::endl;
    }

    // Print the calculated bill distribution
    std::cout << std::endl << "Number of bills:\n";
    for (int i = 0; i < bills.size(); ++i) {
        std::cout << bills[i] << " Unit bills: " << count[i] << std::endl;
    }

    // Pause the program before closing the terminal
    std::cout << std::endl << "Press enter any intereger to close the program...";
    int input;
    std::cin >> input;
}