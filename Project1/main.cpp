#include <iostream>				
#include <conio.h>				
#include "MemoryFunctions.h"	
using namespace std;
#include "DynArray.h"
#include <iostream>
#include <cstdlib> 
#include <ctime> 

int main(int argc, char ** argv)
{
	int score = -1;
	int round = 0;
	cout << "Game about to begin, Do not press anthing until it starts.";
	delay(4000);
	empty();
	srand(time(0));
	DynArray<int> CpuMoves;
	bool play = true;

	while (play == true)
	{
		cout << "Prepare for next pattern" << "\n";
		delay(4000);
		++score;
		++round;
		int test = 0;
		int random = rand() % 4;
		if (random == 0)
		{
			random = 1;
		}
		CpuMoves.append(random);

		for (int i = 0; i < CpuMoves.size(); i++)
		{

			if (CpuMoves[i] == 1)
			{
				drawUp();
				delay(250);
				empty();
			}


			if (CpuMoves[i] == 2)
			{
				drawDown();
				delay(250);
				empty();
			}


			if (CpuMoves[i] == 3)
			{
				drawLeft();
				delay(250);
				empty();
			}


			if (CpuMoves[i] == 4)
			{
				drawRight();
				delay(250);
				empty();
			}
		}




		for (int i = 0; i < CpuMoves.size(); i++)
		{
			char ch;
			int input;
			while (true)
			{
				 ch = _getch();
				 if (ch == 'w' || ch == 'a' || ch == 's' || ch == 'd')
				 {
					 break;
				 }
			}
			switch (tolower(ch))
			{
				
			case 'w':
			{
				drawUp();
				delay(250);
				empty();
				input = 1;
				break;
			}
			case 's':
			{
				drawDown();
				delay(250);
				empty();
				input = 2;
				break;
			}
			case 'a':
			{
				drawLeft();
				delay(250);
				empty();
				input = 3;
				break;
			}
			case 'd':
			{
				drawRight();
				delay(250);
				empty();
				input = 4;
				break;
			}
			
			}
			if (input != CpuMoves[i])
			{
				cout << "Game Over" << "\n";
				cout << "Score: " << score << "\n";
				cout << "Round: " << round << "\n";
				delay(5000);
				play = false;
			}


		}

	}
}