#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

void Menu() {
	cout << "\t**********MENU**********"<< endl;
	cout << "\t*   1.Check Balance    *" << endl;
	cout << "\t*   2.Deposit          *" << endl;
	cout << "\t*   3.Withdraw         *" << endl;
	cout << "\t*   4.Transfert        *" << endl;
	cout << "\t*   5.Exit             *" << endl;
	cout << "\t************************" << endl;
}

int main() {
	int option;
	double balance=0;
	double deposit;
	double cash;
	
	do {
		Menu();
		cout << "\t Option: ";
		cin >> option;
		system("cls");
		switch (option) {
		case 1: cout << "\tBalance is: " << balance << "$" << endl;
			break;
		case 2: cout << "\tDeposit amount:";
			cin >> deposit;
			balance += deposit;
			cout << "\tDeposit was a Successful operation" << endl;
			cout << "\tWould you like to check your balance?" << endl;
			break;
		case 3: cout << "\tWithdraw: ";
			cin >> cash;
			if (cash >= balance)
			{
				cout << "\tNot enough money " << endl;
				cout << "\tMake a deposit" << endl;
				
			}
			else
				balance -= cash;
			    cout << "\tBalance is: " << balance << "$" << endl;
			break;
		case 4:cout << "\tService is currently not availble" << endl;
			cout << "\tAny other option?" << endl;
			break;
		case 5: cout << "\tThank you for your time see you next time" << endl;
			break;
		default:
				cout << "\tInvalid option" << endl;
		}
	} while (option != 5);
	
		







	return 0;
}