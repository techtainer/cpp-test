#include<iostream>

void adder(int &num)
{
	num++;
}

void absT(int &num)
{
	num = num * (-1);
}

void main()
{
	int _num=10;
	
	adder(_num);
	std::cout << "adder :" << _num << std::endl;

	absT(_num);
	std::cout << "absT :" << _num << std::endl;

	absT(_num);
	std::cout << "absT :" << _num << std::endl;

}
