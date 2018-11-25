#include<iostream>
#include<cstring>

using namespace std;
const int NAME_LEN = 20;

enum {
	MAKE=1,
	DEPOSIT,
	WITHDRAW,
	INQUIRE,
	EXIT
};

class Account
{
private:
	int accID;
	int balance;
	char * curName;
public:
	Account(int ID, int money, char *name);
	Account(const Account &ref);

	int GetAccID() const;
	void Deposit(int money);
	int WithDraw(int money);
	void ShowAccInfo() const;
	Account();
};

Account::Account(int ID, int money, char *name)
	:accID(ID), balance(money)
{
	curName = new char[strlen(name) + 1];
	strcpy(curName, name);
}

Account::Account(const Account &ref)
	:accID(ref.accID),balance(ref.balance)
{
	curName = new char[strlen(ref.curName) + 1];
	strcpy(curName, ref.curName);
}

int Account::GetAccID() const { return accID; }

void Account::Deposit(int money)
{
	balance = money;
}

int Account::WithDraw(int money)
{
	if (balance < money)
		return 0;

	balance -= money;
	return money;
}

void Account::ShowAccInfo() const
{
	cout << "Account ID :" << accID << endl;
	cout << "Name :" << curName << endl;
	cout << "Balance :" << balance << endl;
}

Account::Account()
{
	delete[] curName;
}

class AccountHandler
{
private:
	Account *accArr[100];
	int accNum;

public:
	AccountHandler();
	void ShowMenu(void) const;
	void MakeAccount(void);
	void DepositMoney(void);
	void WithDrawMoney(void);
	void ShowAllAccInfo(void) const;
	~AccountHandler();
};

void AccountHandler::ShowMenu(void) const
{
	cout << "---- Menu ----" << endl;
	cout << "1. Create account" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Print Info" << endl;
	cout << "5. Quit" << endl;
}

void AccountHandler::MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[Create account]" << endl;
	cout << "Account ID :"; cin >> id;
	cout << "Name :"; cin >> name;
	cout << "Money :"; cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);
}

void AccountHandler::DepositMoney(void)
{
	int money;
	int id;

	cout << "[Deposit]" << endl;
	cout << "Account ID :"; cin >> id;
	cout << "Money :"; cin >> money;
	cout << endl;

	for (int i=0;i<accNum;i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "Complete" << endl << endl;
			
			return;
		}
	}

	cout <<"Invalid ID"<<endl<<endl;	
}

void AccountHandler::WithDrawMoney(void)
{
	int money;
	int id;

	cout << "[WithDraw]" << endl;
	cout << "Account ID :"; cin >> id;
	cout << "Money :"; cin >> money;
	cout << endl;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->WithDraw(money) == 0)
			{
				cout << "No Money" << endl << endl;
				return;
			}

			cout << "Complete" << endl << endl;
			return;
		}
	}

	cout << "Invalid ID" << endl << endl;
}

AccountHandler::AccountHandler() : accNum(0)
{

}

void AccountHandler::ShowAllAccInfo(void) const
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}

AccountHandler::~AccountHandler()
{
	for (int i = 0; i < accNum; i++)
		delete accArr[i];
}

int main(void)
{
	AccountHandler manager;
	int choice;

	while (1)
	{
		manager.ShowMenu();
		cout << "Select :";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			manager.MakeAccount();
			break;
		case DEPOSIT:
			manager.DepositMoney();
			break;
		case WITHDRAW:
			manager.WithDrawMoney();
			break;
		case INQUIRE:
			manager.ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection" << endl;
		}
	}

	return 0;

}

