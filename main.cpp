/*
File: main.cpp
Description:
Course: 150018 C++ Workshop, Exercise 2, Question 2
Author: Dan Zilberstein
Students: eli iluz 311201354
		& avishay farkash 205918790
*/
#include "main.h"

// Function main - this is the entry code for the program
// It prints menu and performs the action according to the chosen option.
int main(void) {


	int iNumbers[4];
	double dNumbers[4];
	Rational rNumbers[4];
	Complex cNumbers[4];

	srand((unsigned) time(nullptr));

	for (int i = 0; i < 4; i++)
		iNumbers[i] = (rand() % 20) - 10;

	for (int i = 0; i < 4; i++)
		dNumbers[i] = (double)(rand() % 201 - 100) / (rand() % 91 + 10);

	for (int i = 0; i < 4; i++)
	{
		rNumbers[i].numerator = (rand() % 21) - 10;
		rNumbers[i].denominator = (rand() % 30) + 1;

		reductFraction(rNumbers[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		cNumbers[i].real = (double)(rand() % 201 - 100) / (rand() % 91 + 10);
		cNumbers[i].imaginary = (double)(rand() % 201 - 100) / (rand() % 91 + 10);
	}
	int chosen;

	// Everything happens inside of this do-while loop, until the user
	//     has decided to exit (or an error occurs).
	do {
		cout << endl << "Menu options:" << endl << endl;

		const int menuIndent = 10;

		// The user will see:
		//
		//            0 -- exit the program
		//            1 --input type of number to spcific element
		//            2 --show all the elements of one type
		// etc.
		//
		for (chosen = FIRST_MENU_OPTION; chosen <= LAST_MENU_OPTION;
			chosen = (MenuOption)((int)chosen + 1)) {
			cout << setw(menuIndent) << " " << chosen << " -- ";
			cout << menuOptionStrings[chosen] << endl;
		}
		cout << endl;

		cout << "Please choose a menu option: ";
		cin >> chosen;

		// the individual cases, match to the
		// operations they will perform.
		switch (chosen)
		{
		case EXIT_MENU:
			cout << "thanks for using our calculator!" << endl;
			break;

		case INPUT_A_TYPE_OF_NUMBER:
			cout << endl << "options:" << endl << endl;

			// The user will see:
			//
			//             0 -- int
			//         	   1 -- double
			//		       2 --rational
			//		       3 --complex
			// etc.
			//
			for (chosen = FIRST_TYPE; chosen <= LAST_CHOICE;
				chosen++) {
				cout << setw(menuIndent) << " " << chosen << " -- ";
				cout << typesStrings[chosen] << endl;
			}
			cout << endl;

			cout << "Please choose a type: ";
			cin >> chosen;

			switch (chosen)
			{
			case INT:
				chosen = 1;
				break;
			case DOUBLE:
				break;
			case RATIONAL:
				break;
			case COMPLEX:
				break;
			case INT_IN_RATIONAL:
				break;
			case INT_IN_COMPLEX:
				break;
			case RATIONAL_IN_COMPLEX:
				break;
			default:
				break;
			}


			break;

		case PRINT_ALL_NUMBERS_OF_ONE_TYPE:
			cout << endl << "types options:" << endl << endl;

			// The user will see:
			//
			//             0 -- int
			//         	   1 -- double
			//		       2 --rational
			//		       3 --complex
			// 
			//
			for (chosen = FIRST_TYPE; chosen <= LAST_TYPE;
				chosen++) {
				cout << setw(menuIndent) << " " << chosen << " -- ";
				cout << typesStrings[chosen] << endl;
			}
			cout << endl;

			cout << "Please choose a type: ";
			cin >> chosen;
	
			switch (chosen)
			{
			case INT:
				for (int i = 0; i < 4; i++)
					cout << "index [" << i << "] -- " << iNumbers[i] << endl;
				chosen = 1;
				break;
			case DOUBLE:
				for (int i = 0; i < 4; i++)
					cout << "index [" << i << "] -- " << dNumbers[i] << endl;
				break;
			case RATIONAL:
				for (int i = 0; i < 4; i++)
					cout << "index [" << i << "] -- " << rNumbers[i] << endl;
				break;
			case COMPLEX:
				for (int i = 0; i < 4; i++)
					cout << "index [" << i << "] -- " << cNumbers[i] << endl;
				break;
			}
			break;

		case ADD_ALL_NUMBERS_OF_ONE_TYPE:
			cout << endl << "types options:" << endl << endl;

			// The user will see:
			//
			//             0 -- int
			//         	   1 -- double
			//		       2 --rational
			//		       3 --complex
			// 
			//
			for (chosen = FIRST_TYPE; chosen <= LAST_TYPE;
				chosen++) {
				cout << setw(menuIndent) << " " << chosen << " -- ";
				cout << typesStrings[chosen] << endl;
			}
			cout << endl;

			cout << "Please choose a type: ";
			cin >> chosen;

			switch (chosen)
			{
			case INT:
				chosen = 1;
				break;
			case DOUBLE:
				break;
			case RATIONAL:
				break;
			case COMPLEX:
				break;
			}
			break;

		case MULTIPLIES_ALL_NUMBERS_OF_ONE_TYPE:
			cout << endl << "types options:" << endl << endl;

			// The user will see:
			//
			//             0 -- int
			//         	   1 -- double
			//		       2 --rational
			//		       3 --complex
			// 
			//
			for (chosen = FIRST_TYPE; chosen <= LAST_TYPE;
				chosen++) {
				cout << setw(menuIndent) << " " << chosen << " -- ";
				cout << typesStrings[chosen] << endl;
			}
			cout << endl;

			cout << "Please choose a type: ";
			cin >> chosen;

			switch (chosen)
			{
			case INT:
				chosen = 1;
				break;
			case DOUBLE:
				break;
			case RATIONAL:
				break;
			case COMPLEX:
				break;
			}
			break;

		case SUM_TWO_ELEMENTS:
			cout << endl << "types options:" << endl << endl;

			// The user will see:
			//
			//             0 -- int
			//         	   1 -- double
			//		       2 --rational
			//		       3 --complex
			// 
			//
			for (chosen = FIRST_TYPE; chosen <= LAST_TYPE;
				chosen++) {
				cout << setw(menuIndent) << " " << chosen << " -- ";
				cout << typesStrings[chosen] << endl;
			}
			cout << endl;

			cout << "Please choose a type: ";
			cin >> chosen;

			switch (chosen)
			{
			case INT:
				chosen = 1;
				break;
			case DOUBLE:
				break;
			case RATIONAL:
				break;
			case COMPLEX:
				break;
			}
			break;

		case MULTYPLY_TWO_ELEMENTS:
			cout << endl << "types options:" << endl << endl;

			// The user will see:
			//
			//             0 -- int
			//         	   1 -- double
			//		       2 --rational
			//		       3 --complex
			// 
			//
			for (chosen = FIRST_TYPE; chosen <= LAST_TYPE;
				chosen++) {
				cout << setw(menuIndent) << " " << chosen << " -- ";
				cout << typesStrings[chosen] << endl;
			}
			cout << endl;

			cout << "Please choose a type: ";
			cin >> chosen;

			switch (chosen)
			{
			case INT:
				chosen = 1;
				break;
			case DOUBLE:
				break;
			case RATIONAL:
				break;
			case COMPLEX:
				break;
			}
			break;

		case SUB_TWO_ELEMENTS:
			cout << endl << "types options:" << endl << endl;

			// The user will see:
			//
			//             0 -- int
			//         	   1 -- double
			//		       2 --rational
			//		       3 --complex
			// 
			//
			for (chosen = FIRST_TYPE; chosen <= LAST_TYPE;
				chosen++) {
				cout << setw(menuIndent) << " " << chosen << " -- ";
				cout << typesStrings[chosen] << endl;
			}
			cout << endl;

			cout << "Please choose a type: ";
			cin >> chosen;

			switch (chosen)
			{
			case INT:
				chosen = 1;
				break;
			case DOUBLE:
				break;
			case RATIONAL:
				break;
			case COMPLEX:
				break;
			}
			break;

		case SORT_ELEMENTS_OF_ONE_TYPE:
			cout << endl << "types options:" << endl << endl;

			// The user will see:
			//
			//             0 -- int
			//         	   1 -- double
			//		       2 --rational
			//		       3 --complex
			// 
			//
			for (chosen = FIRST_TYPE; chosen <= LAST_TYPE;
				chosen++) {
				cout << setw(menuIndent) << " " << chosen << " -- ";
				cout << typesStrings[chosen] << endl;
			}
			cout << endl;

			cout << "Please choose a type: ";
			cin >> chosen;

			switch (chosen)
			{
			case INT:
				qsort(iNumbers, 4, sizeof * iNumbers, [](const void* x, const void* y)
					{
						if (*(int*)(x) == *(int*)(y))
							return 0;

						if (*(int*)(x) > * (int*)(y))
							return 1;

						return -1;
					});
				chosen = 1;
				break;
			case DOUBLE:
				qsort(dNumbers, 4, sizeof * dNumbers, [](const void* x, const void* y)
					{
						if (*(double*)(x) == *(double*)(y))
							return 0;

						if (*(double*)(x) > * (double*)(y))
							return 1;

						return -1;
					});
				break;
			case RATIONAL:
				qsort(rNumbers, 4, sizeof * rNumbers, compareRational);
				break;
			case COMPLEX:
				qsort(cNumbers, 4, sizeof * cNumbers, compareComplex);
				break;
			}
			break;

		default:
			cout << "ERROR" << endl;
			break;
		}
	} while (chosen != EXIT_MENU);

	return 0;
}
