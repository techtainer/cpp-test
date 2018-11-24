#include <iostream>
#include "name.h"

void BestCompImpl::SimpleFunc(void)
{
	std::cout << "Defined by BestCompImpl" << std::endl;
}

void ProgramCompImpl::SimpleFunc(void)
{
	std::cout << "Defined by ProgramCompImpl" << std::endl;
}