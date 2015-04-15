//Written by Brandon Holland
// Simple game.  Amount of times it takes to guess a random number between 1-100

#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>  
#include <iostream>     

int main()
{
	int score = 1;
	int number;
	int guess;

	srand(time(NULL));
	number = rand() % 100 + 1;

	cout << "What do you think the number is?" << endl;

	cin >> guess;

	while(guess != number)
	{
		if(guess < number)
		{
			cout << "The number is higher than your guess!" << endl;
		}

		if(guess > number)
		{
			cout << "The number is lower than your guess!" << endl;
		}

		cout << "What is your new guess" << endl;

		cin >> guess;

		score++;
	}

	cout << "CORRECT! Your score is: " << score << endl;
}