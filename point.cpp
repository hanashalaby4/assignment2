#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;



	point::point()
	{
		x = 0;
		y = 0;
	}
	point::point(float X, float Y)
	{
		x = X;
		y = Y;
	}
	void point::setX(float X)
	{
		x = X;

	}
	void point::setY(float Y)
	{
		y = Y;
	}
	float point::getX() const
	{
		return x;
	}
	float point::getY() const
	{
		return y;
	}
	void point::displayPoint() const
	{
		cout << "(" << x << "," << y << ")";
	}
	float point::calcDistance(const point & cluster) const
	{
		float distance = sqrt((pow(x, 2) - pow(cluster.getX(), 2)) + (pow(y, 2) - pow(cluster.getY(), 2)));
		return distance;
	}
