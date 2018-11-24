#pragma once

class Printer
{
public:
	void SetString(const char *tmp);
	void ShowString();

private:
	char tmp_string[30];

};
