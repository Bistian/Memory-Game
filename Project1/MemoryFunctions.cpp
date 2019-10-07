#include "MemoryFunctions.h"
#include <iostream>
using namespace std;


void empty()
{
   system("cls");
   cout << "             *             " << endl;
   cout << "           *   *           " << endl;
   cout << "         *       *         " << endl;
   cout << "       *           *       " << endl;
   cout << "     *   *       *   *     " << endl;
   cout << "   *       *   *       *   " << endl;
   cout << " *           *           * " << endl;
   cout << "   *       *   *       *   " << endl;
   cout << "     *   *       *   *     " << endl;
   cout << "       *           *       " << endl;
   cout << "         *       *         " << endl;
   cout << "           *   *           " << endl;
   cout << "             *             " << endl;

}


void drawUp()
{
   system("cls");
   cout << "             *             " << endl;
   cout << "           *****           " << endl;
   cout << "         *********         " << endl;
   cout << "       *************       " << endl;
   cout << "     *   *********   *     " << endl;
   cout << "   *       *****       *   " << endl;
   cout << " *           *           * " << endl;
   cout << "   *       *   *       *   " << endl;
   cout << "     *   *       *   *     " << endl;
   cout << "       *           *       " << endl;
   cout << "         *       *         " << endl;
   cout << "           *   *           " << endl;
   cout << "             *             " << endl;
}


void drawDown()
{
   system("cls");
   cout << "             *             " << endl;
   cout << "           *   *           " << endl;
   cout << "         *       *         " << endl;
   cout << "       *           *       " << endl;
   cout << "     *   *       *   *     " << endl;
   cout << "   *       *   *       *   " << endl;
   cout << " *           *           * " << endl;
   cout << "   *       *****       *   " << endl;
   cout << "     *   *********   *     " << endl;
   cout << "       *************       " << endl;
   cout << "         *********         " << endl;
   cout << "           *****           " << endl;
   cout << "             *             " << endl;
}


void drawLeft()
{
   system("cls");
   cout << "             *             " << endl;
   cout << "           *   *           " << endl;
   cout << "         *       *         " << endl;
   cout << "       *           *       " << endl;
   cout << "     *****       *   *     " << endl;
   cout << "   *********   *       *   " << endl;
   cout << " *************           * " << endl;
   cout << "   *********   *       *   " << endl;
   cout << "     *****       *   *     " << endl;
   cout << "       *           *       " << endl;
   cout << "         *       *         " << endl;
   cout << "           *   *           " << endl;
   cout << "             *             " << endl;
}


void drawRight()
{
   system("cls");
   cout << "             *             " << endl;
   cout << "           *   *           " << endl;
   cout << "         *       *         " << endl;
   cout << "       *           *       " << endl;
   cout << "     *   *       *****     " << endl;
   cout << "   *       *   *********   " << endl;
   cout << " *           ************* " << endl;
   cout << "   *       *   *********   " << endl;
   cout << "     *   *       *****     " << endl;
   cout << "       *           *       " << endl;
   cout << "         *       *         " << endl;
   cout << "           *   *           " << endl;
   cout << "             *             " << endl;
}


void delay(const unsigned int milliSeconds)
{
   unsigned int start = clock();
   while ((clock() - start) < milliSeconds) {}
}