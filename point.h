#pragma once
#ifndef Point_H
#define Point_H
#include <iostream>
#include <cmath>
using namespace std;
class point {
private:
	float x, y;
public:
	point();
	
	point(float X, float Y);
	
	void setX(float X);
	
	void setY(float Y);

	float getX() const;
	
	float getY() const;
	
	void displayPoint() const;
	
	float calcDistance(const point& cluster) const;
	
};
#endif