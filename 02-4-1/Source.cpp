#include<cstring>
#include<iostream>

using namespace std;

void main()
{
	char tmp[10] = "Test";
	char tmp1[10];

	cout << strlen(tmp) << endl;
	strcat(tmp, " !!");
	cout << tmp << endl;
	strcpy(tmp1, tmp);
	cout << tmp1 << endl;
	cout << strcmp(tmp1,tmp) << endl;
}