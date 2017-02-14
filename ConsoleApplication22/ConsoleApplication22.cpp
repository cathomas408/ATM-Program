// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

// accountproject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char choice;
	float sBalance;
	float depAmount;
	float witAmount;
	float cheAmount;
	float totDeposits = 0, totChecks = 0, totWithdrawal = 0;
	float curBalance = 0;


	cout << "Please Enter a Starting Balance" << endl;
	cin >> sBalance;
	curBalance += sBalance;
	cout << "Your starting balance is: $" << sBalance << endl;


	do

	{
		cout << "would you like to Deposit, Scan checks, Withdraw, or quit and view summary? 'D' 'C' 'W' 'Q'" << endl;
		cin >> choice;




		switch (choice)

		{
		case'D':
		case'd':
			cout << "How much do you want to deposit" << endl;
			cin >> depAmount;
			curBalance += depAmount;
			cout << "Your current balance is: $" << curBalance << endl;
			break;


		case 'C':
		case 'c':
			cout << "What is the Check amount you wish to deposit" << endl;
			cin >> cheAmount;
			curBalance += cheAmount;
			cout << "Your current balance is: $" << curBalance << endl;
			break;


		case'W':
		case'w':
			cout << "How much do you want to withdraw" << endl;
			cin >> witAmount;
			if (witAmount > curBalance)
			{
				cout << "You have insufficient funds" << endl;


			}

			else
			{
				curBalance -= witAmount;
				cout << "Your current balance is: $" << curBalance << endl;
			}

			break;


		case'Q':
		case'q':

			break;







		default:
			cout << "Invalid option" << endl;
		}


		if (choice == 'D' || choice == 'd')
		{
			totDeposits += depAmount;
		}

		else if
			(choice == 'W' || choice == 'w')
		{
			totWithdrawal += witAmount;
		}

		else if
			(choice == 'C' || choice == 'c')
		{
			totChecks += cheAmount;
		}

	} while (choice != 'q');


	//format the following properly

	cout << "your starting balance was: $" << sBalance << std::endl;
	cout << "your total deposits are: $" << totDeposits << endl;
	cout << "your total withdrawals are: $" << totWithdrawal << endl;
	cout << "your total checks are: $" << totChecks << endl;
	cout << "your current balance is: $" << curBalance << endl;




	return 0;
}


