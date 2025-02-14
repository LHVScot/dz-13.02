#include "rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() : width(1.0), height(1.0) {}

Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

Rectangle::Rectangle(const Rectangle& other) : width(other.width), height(other.height) {}

Rectangle::~Rectangle() {
    cout << "Деструктор класса Rectangle вызван (width=" << width << ", height=" << height << ")" << endl;
}

double Rectangle::getWidth() const { return width; }

double Rectangle::getHeight() const { return height; }

void Rectangle::setWidth(double newWidth) { width = newWidth; }

void Rectangle::setHeight(double newHeight) { height = newHeight; }

double Rectangle::getArea() const { return width * height; }

void Rectangle::display() const {
    cout << "Ширина: " << width << endl;
    cout << "Высота: " << height << endl;
    cout << "Площадь: " << getArea() << endl;
}