#include<iostream>

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *tmp = new Point;

	tmp->xpos = p1.xpos + p2.xpos;
	tmp->ypos = p1.ypos + p2.ypos;

	return *tmp;
}

void main()
{
	Point *pp1 = new Point;
	Point *pp2 = new Point;

	pp1->xpos = 10;
	pp1->ypos = 20;
	pp2->xpos = 30;
	pp2->ypos = 40;

	Point &result = PntAdder(*pp1,*pp2);

	std::cout << result.xpos << "  " << result.ypos << std::endl;

	delete pp1, pp2;
	delete &result;

}