#include<iostream>
#include"Header.h"

using namespace std;

void Calculator::Init()
{
	count_add = 0;
	count_sub = 0;
	count_mul = 0;
	count_div = 0;
}

void Calculator::ShowOpCount()
{
	cout << "Add :" << count_add << " Sub :" << count_sub << " Mul :" << count_mul << " Div :" << count_div << endl;
}

float Calculator::Add(const float &tmp1, const float &tmp2)
{
	float result;

	count_add++;
	result = tmp1 + tmp2;

	return result;
}

float Calculator::Min(const float &tmp1, const float &tmp2)
{
	float result;

	count_sub++;
	result = tmp1 - tmp2;

	return result;
}

float Calculator::Mul(const float &tmp1, const float &tmp2)
{
	float result;

	count_mul++;
	result = tmp1 * tmp2;

	return result;
}

float Calculator::Div(const float &tmp1, const float &tmp2)
{
	float result;

	count_div++;
	result = tmp1 / tmp2;

	return result;
}