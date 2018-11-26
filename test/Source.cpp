#include<iostream>

int test(const char *tmp)
{
	return 0;
}

int main(void)
{
	const char *vcal = "Hello";

	test("Test");

	return 0;
}