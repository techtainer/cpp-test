#include<iostream>
#include"Header.h"

void Printer::SetString(const char *tmp)
{
	strcpy(tmp_string, tmp);
}

void Printer::ShowString()
{
	std::cout << tmp_string << std::endl;
}