#include <iostream>

void swap(int *num1, int *num2);
void swap(char *num1, char *num2);
void swap(double *num1, double *num2);

int main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111,dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;

	return 0;
}

void swap(int *_num1, int *_num2)
{
	int temp;

	temp = *_num1;
	*_num1 = *_num2;
	*_num2 = temp;
}

void swap(char *_num1, char *_num2)
{
	char temp;

	temp = *_num1;
	*_num1 = *_num2;
	*_num2 = temp;
}

void swap(double *_num1, double *_num2)
{
	double temp;

	temp = *_num1;
	*_num1 = *_num2;
	*_num2 = temp;
}