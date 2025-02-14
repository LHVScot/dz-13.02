#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    // ������������
    Point();
    Point(double x, double y);
    Point(const Point& other);

    // ����������
    ~Point();

    // ��������� (getters)
    double getX() const;
    double getY() const;

    // ��������� (setters)
    void setX(double newX);
    void setY(double newY);

    // ����� ��� ������ ��������� �����
    void display() const;
};

#endif