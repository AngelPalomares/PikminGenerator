#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "Legna.h"
#include <ctime>
using namespace std;

int main()
{
	int MaxNumber = 100;

	Pikmin pikmin;
	Pikmin2 pikmin2;
	Pikmin3 pikmin3;

	int testing;
	int input;

	srand(time(NULL));

	do {
		MaxNumber = 100;
		cout << "Welcome to the Pikmin Random generator" << endl;

		cout << "Please pick from the following options" << endl;
		cout << "1. Pikmin " << endl;
		cout << "2. Pikmin 2 " << endl;
		cout << "3. Pikmin 3 " << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			MaxNumber = 100;
			do {
				MaxNumber = 100;
				pikmin.RedPikmin = rand() % (MaxNumber + 1);
				MaxNumber -= pikmin.RedPikmin;

				pikmin.BluePikmin = rand() % (MaxNumber + 1);
				MaxNumber -= pikmin.BluePikmin;

				pikmin.YellowPikmin = rand() % (MaxNumber + 1);
			} while (pikmin.RedPikmin + pikmin.BluePikmin + pikmin.YellowPikmin != 100);

			cout << "This is the amount of Red Pikmin: " << pikmin.RedPikmin << endl;
			cout << "This is the amount of Yellow Pikmin: " << pikmin.YellowPikmin << endl;
			cout << "This is the amount of Blue Pikmin: " << pikmin.BluePikmin << endl;

			break;

		case 2:
			do {
				MaxNumber = 100;
				pikmin2.RedPikmin = rand() % (MaxNumber + 1);
				MaxNumber -= pikmin2.RedPikmin;

				pikmin2.BluePikmin = rand() % (MaxNumber + 1);
				MaxNumber -= pikmin2.BluePikmin;

				pikmin2.YellowPikmin = rand() % (MaxNumber + 1);
				MaxNumber -= pikmin2.YellowPikmin;

				pikmin2.WhitePikmin = rand() % (MaxNumber + 1);
				MaxNumber -= pikmin2.WhitePikmin;

				pikmin2.PurplePikmin = MaxNumber;
			} while (pikmin2.RedPikmin + pikmin2.BluePikmin + pikmin2.YellowPikmin + pikmin2.PurplePikmin + pikmin2.WhitePikmin != 100);

			cout << "This is the amount of Red Pikmin: " << pikmin2.RedPikmin << endl;
			cout << "This is the amount of Yellow Pikmin: " << pikmin2.YellowPikmin << endl;
			cout << "This is the amount of Blue Pikmin: " << pikmin2.BluePikmin << endl;
			cout << "This is the amount of Purple Pikmin: " << pikmin2.PurplePikmin << endl;
			cout << "This is the amount of White Pikmin: " << pikmin2.WhitePikmin << endl;
			break;

		case 3:
			do {
				MaxNumber = 100;
				pikmin3.RedPikmin = rand() % (MaxNumber + 1);
				MaxNumber -= pikmin3.RedPikmin;

				pikmin3.BluePikmin = rand() % (MaxNumber + 1);
				MaxNumber -= pikmin3.BluePikmin;

				pikmin3.YellowPikmin = rand() % (MaxNumber + 1);
				MaxNumber -= pikmin3.YellowPikmin;

				pikmin3.WingedPikmin = rand() % (MaxNumber + 1);
				MaxNumber -= pikmin3.WingedPikmin;

				pikmin3.RockPikmin = MaxNumber;
			} while (pikmin3.RedPikmin + pikmin3.BluePikmin + pikmin3.YellowPikmin + pikmin3.WingedPikmin + pikmin3.RockPikmin != 100);

			cout << "This is the amount of Red Pikmin: " << pikmin3.RedPikmin << endl;
			cout << "This is the amount of Yellow Pikmin: " << pikmin3.YellowPikmin << endl;
			cout << "This is the amount of Blue Pikmin: " << pikmin3.BluePikmin << endl;
			cout << "This is the amount of Winged Pikmin: " << pikmin3.WingedPikmin << endl;
			cout << "This is the amount of Rock Pikmin: " << pikmin3.RockPikmin << endl;
			break;

		default:
			cout << "Please stay within the range" << endl;
		}
	} while (input != 0);

	return 0;
}
