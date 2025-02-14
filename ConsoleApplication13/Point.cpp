#include "point.h"
#include <iostream>

using namespace std;

Point::Point() : x(0.0), y(0.0) {}

Point::Point(double x, double y) : x(x), y(y) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point::~Point() {
    cout << "Деструктор класса Point вызван (x=" << x << ", y=" << y << ")" << endl;
}

double Point::getX() const { return x; }

double Point::getY() const { return y; }

void Point::setX(double newX) { x = newX; }

void Point::setY(double newY) { y = newY; }

void Point::display() const {
    cout << "Координаты: (" << x << ", " << y << ")" << endl;
}