/*
File: main.cpp
Description:
Course: 150018 C++ Workshop, Exercise 1, Question 1
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

	srand(time(nullptr));

	for (int i = 0; i < 4; i++)
		iNumbers[i] = (rand() % 20) - 10;
	
	for (int i = 0; i < 4; i++)
		dNumbers[i] = (rand() % 20) - 10.0;

	for (int i = 0; i < 4; i++)
	{
		rNumbers[i]. = (rand() % 21) - 10;
		rNumbers[i]. = (rand() % 30) + 1;
	}

	for (int i = 0; i < 4; i++)
	{
		cNumbers[i]. = (rand() % 21) - 10.0;
		cNumbers[i]. = (rand() % 21) - 10.0;
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
		
		int iNumbers[4];
		double dNumbers[4];
		Rational rNumbers[4];
		Complex cNumbers[4];


		// the individual cases, match to the
		// operations they will perform.
		switch (chosen)
		{
		case EXIT_MENU:
			break;
		case INPUT_A_TYPE_OF_NUMBER:
			cout << endl << "types options:" << endl << endl;

		// The user will see:
		//
		//             0 -- int
		//         	   1 -- double
		//		       2 --rational
		//		       3 --complex
		// etc.
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
				break;
			case DOUBLE:
				break;
			case RATIONAL:
				break;
			case COMPLEX:
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
			// etc.
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
				break;
			case DOUBLE:
				break;
			case RATIONAL:
				break;
			case COMPLEX:
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
			// etc.
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
			// etc.
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
			// etc.
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
			// etc.
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
			// etc.
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
			// etc.
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
				break;
			case DOUBLE:
				break;
			case RATIONAL:
				break;
			case COMPLEX:
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


istream& operator >>(istream&, int&)