#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double height;

public:
    // Конструкторы
    Rectangle();
    Rectangle(double width, double height);
    Rectangle(const Rectangle& other);

    // Деструктор
    ~Rectangle();

    // Аксессоры (getters)
    double getWidth() const;
    double getHeight() const;

    // Аксессоры (setters)
    void setWidth(double newWidth);
    void setHeight(double newHeight);

    // Метод для вычисления площади
    double getArea() const;

    // Метод для вывода информации о прямоугольнике
    void display() const;
};

#endif