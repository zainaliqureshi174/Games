#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

char ch, cha;
int num;
	cout << "\t _________________________________________ \n";
	cout << "\t|                                         |\n";
	cout << "\t|---Welcome to\"Rock Paper Scissor Game\"---|\n";
	cout << "\t|-----------------------------------------|\n";
	cout << "\t|---Press \"P\" to start and \"Q\" to Quiet---|\n";
	cout << "\t|_________________________________________|\n";
	
	cin >> cha;
	
	if (cha == 'P' || cha == 'p')
	{
	
		for(int i = 1; i<=3; i++)
		{
			srand(time(0));
			num = rand()%3;
			cout << "\t _________________________________________ \n";
			cout << "\t|                                         |\n";
			cout << "\t|---------------Round "<<i<<"-------------------|\n";
			cout << "\t|-----------------------------------------|\n";
			cout << "\t|---Enter one of the following options----|\n";
			cout << "\t|--------------\"r\" for Rock---------------|\n";
			cout << "\t|------------\"s\" for Scissors-------------|\n";
			cout << "\t|--------------\"p\" for Paper--------------|\n";
			cout << "\t|_________________________________________|\n";
			cin>>ch;
			
			if (ch == 'r' || ch == 'R') {
			cout<<"Your choice is Rock.\n";
				if (num == 0) {
				cout<<"My choice is Rock\n";
					
					cout << "Ooops Same!!\n\n";
				}
				else if (num == 1) {
				cout<<"My choice is Scissor.\n\n";
					
					cout << "Scissors crashed by Rock!!! Congratulations You win!!!\n\n";
				}
				else if (num == 2) {
				cout<<"My choice is Paper.\n";
					
					cout << "Ooops!!! Paper wrap the rock. You losed!!!\n\n";
				}
			}
			
			else if (ch == 's' || ch == 'S') {
			cout<<"Your choice is Scissor.\n";
				if (num == 0) {
				cout<<"My choice is Rock\n";
					
					cout << "Ooops!!! Scissors crashed by Rock. You losed !!!\n\n";
				}
				else if (num == 1) {
				cout<<"My choice is Scissor.\n\n";
				
					cout << "Ooops Same!!!\n\n";
				}
				else if (num == 2)
				{
					cout<<"My choice is Paper.\n";
					cout << "Scissors cut the paper!!! Congratulations You win!!!\n\n";
				}
			}
			
			else if (ch == 'p' || ch == 'P') {
			cout<<"Your choice is Paper.\n";
				if (num == 0) {
				cout<<"My choice is Rock\n";
				
					cout << "Paper wrap the rock!!! Congratulations You win!!!\n\n";
				}
				else if (num == 1) {
				cout<<"My choice is Scissor.\n";
				
					cout << "Oops!!! Scissors cut the paper. You losed !!!\n\n";
				}
				else if (num == 2) {
				cout<<"My choice is Paper.\n";
				
					cout << "Ooops Same!!!\n\n";
				}
			}
			
			else 
			{
			cout <<"Enter a valid character!! Thanks.\n";
			}
			
			
		}
		
		cout << "\t _________________________________________ \n";
		cout << "\t|                                         |\n";
		cout << "\t|----------Thanks For comming-------------|\n";
		cout << "\t|_________________________________________|\n";
	
	}
	else if (cha == 'Q' || cha == 'q')
	{
		cout << "\t _________________________________________ \n";
		cout << "\t|                                         |\n";
		cout << "\t|----------Thanks For comming-------------|\n";
		cout << "\t|_________________________________________|\n";
	}
return 0;
}
