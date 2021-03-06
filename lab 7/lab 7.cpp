// lab 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

struct Point {
	float x;
	float y;
} typedef Point;

struct Rect {
	Point first;
	Point second;
	Point third;
} typedef Rect;

Rect inputCoord() {
	Rect rect;

	printf("input the x coordinate of the first point: ");
	scanf("%f", &rect.first.x);
	printf("input the y coordinate of the first point: ");
	scanf("%f", &rect.first.y);
	printf("input the x coordinate of the second point: ");
	scanf("%f", &rect.second.x);
	printf("input the y coordinate of the second point: ");
	scanf("%f", &rect.second.y);
	printf("input the x coordinate of the third point: ");
	scanf("%f", &rect.third.x);
	printf("input the y coordinate of the third point: ");
	scanf("%f", &rect.third.y);

	return rect;
}

float getLenght(Point first, Point second) {
	return sqrt(pow(second.x - first.x, 2) + pow(second.x - first.x, 2));
}

float getPerimetr(Rect rect) {
	return 2 * (getLenght(rect.first, rect.second) + getLenght(rect.first, rect.third));
}

float getSquare(Rect rect) {
	return getLenght(rect.first, rect.second) * getLenght(rect.first, rect.third);

}
int main(){
	Rect rect = inputCoord();


	




    return 0;
}

