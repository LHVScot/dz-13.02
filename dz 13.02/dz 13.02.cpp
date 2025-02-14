#include <iostream>
#include "Student.h"
#include "Point.h"
#include "Car.h"
#include "Fraction.h"
#include "Rectangle.h"


using namespace std;

int main() {
    // Пример использования
    Student student1("Иван Иванов", 20, 4.5);
    student1.display();
    cout << endl;

    Point point1(1.0, 2.0);
    point1.display();
    cout << endl;

    Car car1("Toyota", "Camry", 2020);
    car1.display();
    cout << endl;

    Fraction fraction1(1, 2);
    fraction1.display();
    cout << endl;

    Rectangle rectangle1(5.0, 10.0);
    rectangle1.display();
    cout << endl;

    return 0;
}