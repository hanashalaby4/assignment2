//hana shalaby 900223042
//assignment 2


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "point.h"
using namespace std;
const int n = 200;
const int m = 20;

point Center(const point* C, int n);//returns average of the cluster
void checkDist( const point& centerA, const point& centerB, const point& p); //checks distance between p and each cluster
void randomizeB(point* B, int n);//randomize 200 coordinate pairs for cluster B
void randomizeA(point* A, int n); //randomize 200 coordinate pairs for cluster A
void generateP(point* P, int m); //randomize 20 points

int main()
{
	point* A;
	point* B;
	point* P;
	A = new point[n];
	B = new point[n];
	P = new point[m];
	randomizeA(A, n);
	randomizeB(B, n);
	generateP(P, m);
	point centerA = Center(A, n);
	point centerB = Center(B, n);
	for (int i = 0; i < m; i++)
	{
		checkDist(centerA, centerB, *(P+i));
	}

	delete[]A;
	delete[]B;
	delete[]P;
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
		cout << "the point ";
		p.displayPoint();
		cout << " is closer to the cluster A" << endl;
	}
	else
	{
		cout << "the point ";
		p.displayPoint();
		cout << " is closer to the cluster B" << endl;
	}
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

