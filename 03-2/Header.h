#pragma once

class Calculator
{
private:
	int count_add;
	int count_sub;
	int count_mul;
	int count_div;

public:
	void Init();
	void ShowOpCount();
	float Add(const float &tmp1, const float &tmp2);
	float Min(const float &tmp1, const float &tmp2);
	float Div(const float &tmp1, const float &tmp2);
	float Mul(const float &tmp1, const float &tmp2);
};