#include <iostream>

void main()
{
	char name[100];
	char phone[100];

	std::cout << "Name :";
	std::cin >> name;
	std::cout << "Phone :";
	std::cin >> phone;

	std::cout << name << " " << phone;
		
}