#include"Header.h"

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello World!");
	pnt.ShowString();

	pnt.SetString("I love c++");
	pnt.ShowString();

	return 0;
}