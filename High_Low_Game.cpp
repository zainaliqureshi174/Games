//-----------------------------------------------------------------------------
//This program is a High-low game.
//It will guess the number you think in your mind by the clues of High and low.
//-----------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{

	cout << "Welcome to High-Low game\n";
	cout << "Please think of a number between 1 and 100 and I'll guess that number.\n";
	cout << "Press 'Y' or 'y' if the number is correct.\n";
	cout << "Press 'H' or 'h' for 'too high' and press 'L' or 'l' for 'too low'\n";
	cout << "\nLet me guess!\n";

	char ans;
	int x = 1 + rand() % 101;		//Generating a random number (1 to 100)
	int count = 0;				//Counter variable
	
	while (true)	
	{
		cout << "Is it " << x << "?\n";
		cin >> ans;
		
		count++;
		//Loop if number is low
		while (ans == 'l' || ans == 'L')
		{
		//Generating random numbers greater then previous number
			x = (x + 1 + rand() % 101);
			cout << "Is it " << x << "?\n";
			cin >> ans;
			count++;
		}
		//Loop if number is High
		while (ans == 'h' || ans == 'H')
		{
		//Generating random numbers smaller then previous number
			x = 1 + rand() % x;
			cout << "Is it " << x << "?\n";
			cin >> ans;
			count++;
		}
		//Terminating the loop
		if (ans == 'y' || ans == 'Y') 
		{
			break;
		}
	}
	cout << "\nHa!\n";
	cout << "I guessed the number in " << count << " guesses.\n";
	cout << "Thank you for playing the game.\n";
	return 0;
}

//-------------------------------------------------------------------------------
