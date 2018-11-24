#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

	void GetValue(int &x, int &y)
	{
		x = xpos;
		y = ypos;
	}

	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	Point pos;
	int length;

public:
	void SetValue(const int &x, const int &y, const int &tmpLength)
	{
		pos.Init(x,y);
		length = tmpLength;
	}

	void GetValue(int &x, int &y, int &tmpLength)
	{
		pos.GetValue(x, y);
		tmpLength = length;
	}

	void ShowInfo(void)
	{
		pos.ShowPointInfo();
		cout << "Length : " << length << endl;
	}
};

class Ring
{
private:
	Circle cir1;
	Circle cir2;

public:
	void Init(int x1, int y1, int len1, int x2, int y2, int len2)
	{
		cir1.SetValue(x1, y1, len1);
		cir2.SetValue(x2, y2, len2);
	}

	void ShowRingInfo()
	{
		int x, y, len;
		
		cir1.GetValue(x, y, len);
		cout << "Inner Circle Info..." << endl;
		cout << "Radius :"<< len<< endl;
		cout << "["<<x<<" , "<<y<<"]" << endl;

		cir2.GetValue(x, y, len);
		cout << "Inner Circle Info..." << endl;
		cout << "Radius :" << len << endl;
		cout << "[" << x << " , " << y << "]" << endl;
	}
};

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}