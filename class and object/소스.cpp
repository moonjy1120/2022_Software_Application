#include <iostream>

using namespace std;

class Rectangle
{
public:
	int width, height;
	bool isSquare();
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int c);
};

bool Rectangle::isSquare()
{
	if (width == height)
		return true;
	else
		return false;
}

Rectangle::Rectangle()
{
	width = height = 1;
};

Rectangle::Rectangle(int a, int b)
{ 
	width = a;
	height = b;
};

Rectangle::Rectangle(int c)
{
	width = height = c;
};

int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(5);
	if (rect1.isSquare()) cout << "rect1 is square" << endl;
	if (rect2.isSquare()) cout << "rect2 is square" << endl;
	if (rect3.isSquare()) cout << "rect3 is square" << endl;

	return 0;
}