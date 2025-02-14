#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    // Конструкторы
    Car();
    Car(const std::string& brand, const std::string& model, int year);
    Car(const Car& other);

    // Деструктор
    ~Car();

    // Аксессоры (getters)
    std::string getBrand() const;
    std::string getModel() const;
    int getYear() const;

    // Аксессоры (setters)
    void setBrand(const std::string& newBrand);
    void setModel(const std::string& newModel);
    void setYear(int newYear);

    // Метод для вывода информации о машине
    void display() const;
};

#endif