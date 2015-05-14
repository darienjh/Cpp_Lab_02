// Lab2_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	int flip;
	int coin1 = 0;
	int h = 0, t = 1;
	int totalh1 = 0, totalt1 = 0;
	int totalht = 0;

	cout << "How many times would you like to flip a coin";
	cin >> flip;

	srand(clock());
	while (coin1 < flip)
	{
		short rnd = rand() % 2;
		if (rnd == h)
		{
			cout << "H" << endl;
			totalh1++;
		}
		else if (rnd == t)
		{
			cout << "T" << endl;
			totalt1++;
		}
		coin1++;
	}
	cout << "There were" << totalh1 << "heads and " << totalt1 << "tails." << endl;
	cout << coin1 << endl;
	cout << flip << endl;

	getchar();
	getchar();
	getchar();
	

	return 0;
}

