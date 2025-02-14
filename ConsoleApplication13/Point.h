#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    // Конструкторы
    Point();
    Point(double x, double y);
    Point(const Point& other);

    // Деструктор
    ~Point();

    // Аксессоры (getters)
    double getX() const;
    double getY() const;

    // Аксессоры (setters)
    void setX(double newX);
    void setY(double newY);

    // Метод для вывода координат точки
    void display() const;
};

#endif