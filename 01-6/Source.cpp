#include<iostream>

using namespace std;

struct account
{
	int number;
	char name[100];
	int	balance;
};

int main()
{
	bool running = true;
	int	num;
	account KB[100];
	int total = 0;
	int tempID, tempMoney;

	while (running)
	{
		cout << "----- Menu -----" << endl;
		cout << "1. Create account" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Withdraw" << endl;
		cout << "4. Display all Info." << endl;
		cout << "5. Quit" << endl;
		cout << "Select : ";
		cin >> num;

		switch (num)
		{
		case 1:
			cout << "Enter name : " << endl;
			cin >> KB[total].name;
			cout << "Enter money : " << endl;
			cin >> KB[total].balance;
			KB[total].number = total;
			total++;
			break;
		case 2:
			cout << "Enter ID : " << endl;
			cin >> tempID;
			cout << "Enter money : " << endl;
			cin >> tempMoney;

			for (int i = 0; i < total; i++)
			{
				if (tempID == i)
				{
					KB[tempID].balance += tempMoney;
				}
			}
			break;
		case 3:
			cout << "Enter ID : " << endl;
			cin >> tempID;
			cout << "Enter money : " << endl;
			cin >> tempMoney;

			for (int i = 0; i < total; i++)
			{
				if (tempID == i)
				{
					if (KB[tempID].balance > tempMoney)
						KB[tempID].balance -= tempMoney;
					else
						cout << "No money!" << endl;
				}
			}
			break;
		case 4:
			for (int i = 0; i < total; i++)
			{
				cout << "--------------------------" << endl;
				cout << " ID : " << KB[i].number << endl;
				cout << " Name : " << KB[i].name << endl;
				cout << " Balance : " << KB[i].balance << endl;
			}
			break;
		case 5:
			running = false;
			break;
		}
	}
	return 0;
}