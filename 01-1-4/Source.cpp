#include <iostream>

void main()
{
	bool running = true;
	int sales = 0;

	while (running)
	{
		std::cout << " sales price :";
		std::cin >> sales;

		if (sales == -1)
			running = false;
		else
		{
			std::cout << "Salary is " << 50 + sales * 0.12 << std::endl;
		}
	}
}