// GreetingsConsoleApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  
using namespace std;

int answer = 7;

int guess;
bool keepGoing = true;
				int playAgain;

int main()
{


		while (keepGoing == true) {
		cout << "Guess a number...";
		cin >> guess;
			if (answer == guess)
			{
				cout << "Correct!!" << endl << "Want to play again??? Push 0 for NO..." << endl;
				cin >> playAgain;
				if (playAgain == 0) {
					keepGoing = false;
				}
				else
				{
					answer = answer++;
				}
			}
			else
			{
				if (answer > guess)
				{
					cout << "your guess is too low..." << endl;
				}

				if (answer < guess)
				{
					cout << "Your guess is too high..." << endl;
				}
			}
			guess = NULL;
			
		}

	return 0;
}

