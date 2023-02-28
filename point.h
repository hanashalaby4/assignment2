#pragma once
#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath>
using namespace std;
class point {
private:
	float x, y;
public:
	point()
	{
		x = 0;
		y = 0;
	}
	point(float X, float Y)
	{
		x = X;
		y = Y;
	}
	void setX(float X)
	{
		x = X;

	}
	void setY(float Y)
	{
		y = Y;
	}
	float getX() const
	{
		return x;
	}
	float getY() const
	{
		return y;
	}
	void displayPoint(const point& l)
	{
		cout << "(" << x << "," << y << ")";
	}
	float calcDistance(const point& cluster) const
	{
		float distance = sqrt((pow(x, 2) - pow(cluster.getX(), 2)) + (pow(y, 2) - pow(cluster.getY(), 2)));
		return distance;
	}

};
#endif