#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    // ������������
    Car();
    Car(const std::string& brand, const std::string& model, int year);
    Car(const Car& other);

    // ����������
    ~Car();

    // ��������� (getters)
    std::string getBrand() const;
    std::string getModel() const;
    int getYear() const;

    // ��������� (setters)
    void setBrand(const std::string& newBrand);
    void setModel(const std::string& newModel);
    void setYear(int newYear);

    // ����� ��� ������ ���������� � ������
    void display() const;
};

#endif