// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "ctime"

using namespace std;

bool guessed = false;

int main()
{
	srand(time(NULL));
	int randomNo = rand() % 100 + 1;
	int guess = 0;

	while (guess != randomNo)
	{
		cout << "\nenter a number" << endl;
		cin >> guess;

		if (guess > randomNo)
		{
			cout << "try lower" << endl;
		}
		else if (guess < randomNo)
		{
			cout << "try higher" << endl;
		}
		else if (guess == randomNo)
		{
			cout << "correct" << endl;
		}
	}

	system("PAUSE");
    return 0;
}