#include<iostream>
#include<cstring>
using namespace std;

class MyFriendInfo
{
private:
	char *name;
	int age;
public:
	MyFriendInfo(const char *fname, int fage) : age(fage)
	{
		name = new char(strlen(fname) + 1);
		strcpy(name, fname);

	}

	void ShowMyFriendInfo()
	{
		cout << "Name :" << name << endl;
		cout << "Age :" << age << endl;
	}
	
	~MyFriendInfo()
	{
		cout << "~MyFriendInfo()" << endl;
		delete[] name;
	}
};

class MyFriendDetailInfo :public MyFriendInfo
{
private:
	char *addr;
	char *phone;
public:
	MyFriendDetailInfo(const char *_addr,const char *_phone, const char *name,int age):MyFriendInfo(name,age)
	{
		addr = new char(strlen(_addr)+1);
		phone = new char(strlen(_phone) + 1);
		strcpy(addr, _addr);
		strcpy(phone, _phone);
	}

	void ShowMyFriendDetailedInfo()
	{
		ShowMyFriendInfo();
		cout << "ADDR :" << addr << endl;
		cout << "Phone :" << phone << endl;

	}

	~MyFriendDetailInfo()
	{
		cout << "~MyFriendDetailInfo()" << endl;
		delete[] phone;
		delete[] addr;
	}
};

void main(void)
{
	MyFriendDetailInfo tmp("103-405", "010-", "BH", 44);
	tmp.ShowMyFriendDetailedInfo();
}