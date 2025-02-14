#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double height;

public:
    // ������������
    Rectangle();
    Rectangle(double width, double height);
    Rectangle(const Rectangle& other);

    // ����������
    ~Rectangle();

    // ��������� (getters)
    double getWidth() const;
    double getHeight() const;

    // ��������� (setters)
    void setWidth(double newWidth);
    void setHeight(double newHeight);

    // ����� ��� ���������� �������
    double getArea() const;

    // ����� ��� ������ ���������� � ��������������
    void display() const;
};

#endif