#include "interview.h"
#include <iostream>

// In this question,The factory that you are working at has a crane programmed to move in one dimension. After its start, it 
// makes a specific movement each consecutive minute that passes.
//- Start: Crane is started from position 0.
//- 1st Min : Crane moves 1 meter to the right.It is now in position + 1.
//- 2nd Min : Crane moves 3 meters to the left.It is now in position - 2.
//- 3rd Min : Crane moves 2 meters to the left.It is now in position - 4.
//- 4th Min : Crane moves 1 meter to the right.It is now in position - 3.
//- 5th Min : Crane moves 4 meters to the right.It is now in position + 1.
// After this, it continuously repeats the same movements from the beginning(1 meter to the right, 3
//	meters to the left, …).
// This is a solution for this problem

void question_1() {
    // Declare a variable to store the elapsed time in minutes
    int minute_passed = 0;

    // Prompt the user to enter the elapsed time
    std::cout << "How much time pass since the crane start work (Please enter timespan as minute):";
    std::cin >> minute_passed;

    // Check for negative input
    if (minute_passed < 0) {
        // Handle invalid input: prompt the user to enter a positive value
        std::cout << "Time cannot pass in a negative direction. Please enter a positive timeline:";
        std::cin >> minute_passed;

        // Check if the input is still negative
        if (minute_passed < 0) {
            std::cout << "Time input is still negative --> " << minute_passed << ". Returning...";
            return;
        }
    }

    // Check if the crane has not started working yet
    if (minute_passed == 0) {
        std::cout << "Crane does not start to work! So its location = 0";
        return;
    }

    // Calculate the crane's location based on the elapsed time
    int location = minute_passed % 5;

    // Determine the crane's location based on the calculated value
    switch (location) {
    case 1:
        std::cout << minute_passed << " minutes passed. Crane location is +1";
        break;
    case 2:
        std::cout << minute_passed << " minutes passed. Crane location is -2";
        break;
    case 3:
        std::cout << minute_passed << " minutes passed. Crane location is -4";
        break;
    case 4:
        std::cout << minute_passed << " minutes passed. Crane location is -3";
        break;
    case 0:
        std::cout << minute_passed << " minutes passed. Crane location is +1";
        break;
    }

    // Pause the program before closing the terminal
    std::cout << std::endl << "Press enter any intereger to close the program...";
    int input;
    std::cin >> input;
}