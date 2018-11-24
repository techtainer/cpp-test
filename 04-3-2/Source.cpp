#include<iostream>
#include<cstring>

using namespace std;

namespace COMP_POS
{
	enum {
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};

	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "CLERK" << endl;
			break;
		case SENIOR:
			cout << "SENIOR" << endl;
			break;
		case ASSIST:
			cout << "ASSIST" << endl;
			break;
		case MANAGER:
			cout << "MANAGER" << endl;
			break;
		}
	}
}


class NameCard {

private:
	char	*_name;
	char	*_companyName;
	char	*_phone;
	int		_title;

public:
	NameCard(const char *name, const char *companyName, const char *phone, const int title):_title(title)
	{
		_name = new char[strlen(name)+1];
		_companyName = new char[strlen(companyName) + 1];
		_phone = new char[strlen(phone) + 1];
		
		strcpy(_name, name);
		strcpy(_companyName, companyName);
		strcpy(_phone, phone);

	}

	void ShowNameCardInfo()
	{
		cout << "Name :" << _name << endl;
		cout << "Company :" << _companyName << endl;
		cout << "Phone :" << _phone << endl;
		cout << "Title :"; 
		COMP_POS::ShowPositionInfo(_title);
		cout << endl;
	}

	~NameCard()
	{
		delete[] _name;
		delete[] _companyName;
		delete[] _phone;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSenior("Hong", "OrgEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoEng", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}