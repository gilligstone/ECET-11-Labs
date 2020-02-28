/*
Gil Shteyman and Parth Adhia
Lab 2.3 Rectangle Class
Writer: Gil Shteyman

*/
#include<cmath>
#include<iostream>
using namespace std;

class Rectangle {
private:
	pair <int, int> cord1;
	pair <int, int> cord2;
	pair <int, int> cord3;
	pair <int, int> cord4;
	string fillC;

public:
	void setCord(int, int, int, int, int, int, int, int); //done
	int length(); //done
	int width(); //done 
	int area(); //done
	int perimeter(); //done
	bool square(); //done
	void scale(int);
	Rectangle(int, int, int, int, int, int, int, int); //done
	void setFillCharacter(string);
	void printRectangle();

};

Rectangle::Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	setCord(x1, y1, x2, y2, x3, y3, x4, y4);

}
bool Rectangle::square()
{
	if (length() == width())
		return true;
	else
		return false;
}
int Rectangle::length()
{
	if (abs(cord2.first - cord1.first) >= abs(cord3.second - cord2.second))
		return abs(cord2.first - cord1.first);
	else
		return abs(cord3.second - cord2.second);
}
int Rectangle::width()
{
	if (abs(cord2.first - cord1.first) <= abs(cord3.second - cord2.second))
		return abs(cord2.first - cord1.first);
	else
		return abs(cord3.second - cord2.second);
}
int Rectangle::area()
{
	return length() * width();
}
int Rectangle::perimeter()
{
	return 2 * length() + 2 * width();


}
void Rectangle::setCord(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	int xx1 = x1, yy1 = y1, xx2 = x2, yy2 = y2, xx3 = x3, yy3 = y3, xx4 = x4, yy4 = y4;
	if (xx1 < 0 || yy1 < 0 || xx2 < 0 || yy2 < 0 || xx3 < 0 || yy3 < 0 || xx4 < 0 || yy4 < 0 || xx1 > 20 || yy1 > 20 || xx2 > 20 || yy2 > 20 || xx3 > 20 || yy3 > 20 || xx4 > 20 || yy4 > 20)
	{

		cout << "One of your coordinates were not in the first quadrant. Please enter  new coordinates(x1 y1 x2 y2 ...)"
			<< " where x1 and y1 are the coordinates for the upper left corner of the rectangle and the others go around clockwise):";
		cin >> xx1 >> yy1 >> xx2 >> yy2 >> xx3 >> yy3 >> xx4 >> yy4;
		if (xx1 < 0 || yy1 < 0 || xx2 < 0 || yy2 < 0 || xx3 < 0 || yy3 < 0 || xx4 < 0 || yy4 < 0 || xx1 > 20 || yy1 > 20 || xx2 > 20 || yy2 > 20 || xx3 > 20 || yy3 > 20 || xx4 > 20 || yy4 > 20)
		{
			cout << "coordinates are invalid again setting all coordinates to (0,0) " << endl;
			cord1.first = 0, cord1.second = 0, cord2.first = 0, cord2.second = 0, cord3.first = 0, cord3.second = 0, cord4.first = 0, cord4.second = 0;
		}
	}
	if (yy1 == yy2 && xx2 == xx3 && yy3 == yy4 && xx4 == xx1)
	{
		cord1.first = xx1, cord1.second = yy1, cord2.first = xx2, cord2.second = yy2, cord3.first = xx3, cord3.second = yy3, cord4.first = xx4, cord4.second = yy4;
	}
	else
	{
		cout << "coordinates do not make a rectangle. Setting all coordinates to (0,0) " << endl;
		cord1.first = 0, cord1.second = 0, cord2.first = 0, cord2.second = 0, cord3.first = 0, cord3.second = 0, cord4.first = 0, cord4.second = 0;
	}
}
void Rectangle::scale(int s)
{
	cord2.first *= s;
	cord2.second *= s;
	cord1.second *= s;
	cord3.second *= s;


}
void Rectangle::setFillCharacter(string f)
{
	fillC = f;


}
void Rectangle::printRectangle()
{
	pair <int, int> tL;
	tL.first = cord1.first;
	tL.second = 40 - cord1.second;
	cout << endl;
	for (int i = 0; i < tL.second; i++)
	{
		
		cout << "|" <<  endl;
	}

	
	for (int j = 0; j < abs(cord3.second - cord2.second); j++)
	{
		cout << "|";
		for (int i = 0; i < tL.first - 1; i++)
		{
			cout << " ";
		}
		for (int i = 0; i < abs(cord2.first - cord1.first); i++) {
			cout << fillC;

		}
		cout << endl;
	}
	for (int i = 0; i < (40 - abs(cord3.second - cord2.second) - tL.second); i ++)
	{
		cout << "|" << endl;
	}
	for (int i = 0; i < 40; i++)
		cout << "_";

}

int main()
{
	cout << "Enter the coordinates of your rectangle(Top Left Cord, Top Right Cord, Bottom Right Cord, Bottom Left Cord)(seperated by spaces): ";
	int xx1 , yy1 , xx2 , yy2 , xx3 , yy3 , xx4 , yy4 ;
	cin >> xx1 >> yy1 >> xx2 >> yy2 >> xx3 >> yy3 >> xx4 >> yy4;
	Rectangle rect(xx1, yy1, xx2, yy2, xx3, yy3, xx4, yy4);
	cout << "Enter your fill character for display: ";
	string fill;
	cin >> fill;
	cout << endl;
	rect.setFillCharacter(fill);
	cout << "Object is a square: " << rect.square() << endl << "Your length is: " << rect.length() << " " << "Your width is: " << rect.width() << " " << "Your area is: " << rect.area() << " " << "Your perimeter is: " << rect.perimeter();
	rect.printRectangle();
	int scale;
	cout << endl << "Would you like to scale your rectangle(do not scale by more than 4)(If you do not want to scale it enter 1): ";
	cin >> scale;
	rect.scale(scale);

	cout << "Object is a square: " << rect.square() << endl << "Your length is: " << rect.length() << " " << "Your width is: " << rect.width() << " " << "Your area is: " << rect.area() << " " << "Your perimeter is: " << rect.perimeter();
	rect.printRectangle();

	
}