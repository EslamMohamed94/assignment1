// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public :
	string name ;
	string accountnumber  ;
	double balance = 0;
	double withdraw = 0;
	double diposited = 0;



public:

	


	BankAccount(string n, string a, double b) {
		name = n;
		accountnumber = a;                                   // any variable in the argument of the function is difined in the function as a new var.
		balance = b;

		
	}
     void displaymessage () {    //we change the value of name & accno. & balance cuz function read it as a new variable  
		cout << "Depositer’s name is \n" << name << endl;
		cout << "Account Number is \n" << accountnumber << endl;
		cout << "BALANCE BEFORE ANY OPERATIONS IS\n" << balance << endl;
	}
	void deposit(double diposited )
	{
		balance = balance + diposited ;
		cout << "BALANCE AFTER DEPOSITING 500 POUNDS IS\n" << balance << endl;
	}
	void withdrawing( double withdraw)
	{
		balance = balance - withdraw ;
		cout << "BALANCE AFTER WITHDRAWING 1000 POUNDS IS\n" << balance << endl;
	
	}


};
 int main () 
 {
	 
	 BankAccount myBankAccount("ali", "5204", 12000);
	 myBankAccount.displaymessage();
	 myBankAccount.deposit(500);
	 myBankAccount.withdrawing(700);

	system("pause");
}


