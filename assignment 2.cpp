//hana shalaby 900223042
//assignment 2


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "point.h"
using namespace std;
const int n = 200;
const int m = 20;

point Center(const point* C, int n);//array of x coordinates and number of points
void checkDist(const point& centerA, const point& centerB, const point& p);
void randomizeB(point* B, int n);
void randomizeA(point* A, int n);
void generateP(point* P, int m);

int main()
{
	point* A;
	point* B;
	point* P;
	A = new point[n];
	B = new point[n];
	P = new point[m];
	Center(A, n);
	Center(B, n);
	for (int i = 0; i < m; i++)
	{
		checkDist(*A, *B, *P);
	}

	delete[]A;
	delete[]B;
}
point Center(const point* C, int n)
{
	float sumX = 0;
	float sumY = 0;
	for (int i = 0; i < n; i++)
	{
		sumX = sumX + (*(C + i)).getX();
	}
	float avgX = sumX / n;
	for (int i = 0; i < n; i++)
	{
		sumY = sumY + (*(C + i)).getY();
	}
	float avgY = sumY / n;
	point center(avgX, avgY);
	return center;
}
void checkDist(const point& centerA, const point& centerB, const point& p)
{
	float distA = p.calcDistance(centerA);
	float distB = p.calcDistance(centerB);

	if (distB > distA)
	{
		cout << "the point p is closer to the center A" << endl;
	}
	else
		cout << "the point p is closer to the center B" << endl;
}
void randomizeA(point* A, int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		(*(A + i)).setX(70 + (rand() % 21));
	}
	for (int i = 0; i < n; i++)
	{
		(*(A + i)).setY(70 + (rand() % 21));
	}
}
void randomizeB(point* B, int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		(*(B + i)).setX(20 + (rand() % 21));
	}
	for (int i = 0; i < n; i++)
	{
		(*(B + i)).setY(20 + (rand() % 21));
	}
}
void generateP(point* P, int m)
{
	srand(time(0));
	for (int i = 0; i < m; i++)
	{
		(*(P + i)).setX(5 + (rand() % 101));
	}
	for (int i = 0; i < m; i++)
	{
		(*(P + i)).setY(5 + (rand() % 101));
	}
}
