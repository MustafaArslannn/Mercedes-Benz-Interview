// Interview.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdio.h>
#include "interview.h"

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

int main()
{
	int i = 0;
	int limit = 5;
	while (i < limit)
	{
		int question_no = 0;
		std::cout << "which question should be answered enter an question number in integer: ";
		std::cin >> question_no;
		if (question_no == 1)
		{
			question_1();
			return 0;
		}
		else if (question_no == 2)
		{
			question_2();
			return 0;
		}
		else
			std::cout << "incorrect input (you entered: " << question_no << ") please enter number 1 or 2 " << std::endl;
		i++;
	}
	std::cout << "incorrect input entered " << i << " times. Program aborted."<<std::endl;
	return 0;
}


