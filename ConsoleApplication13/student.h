#pragma once
#include <iostream>
#include <string>

using namespace std;
class Student
{
private:
    string name;
    int age;
    double averageGrade;

public:
    // Конструктор по умолчанию
    Student() : name("Unknown"), age(18), averageGrade(0.0) {}

    // Конструктор с параметрами
    Student(const string& name, int age, double grade) : name(name), age(age), averageGrade(grade) {}

    // Конструктор копирования
    Student(const Student& other) : name(other.name), age(other.age), averageGrade(other.averageGrade) {}

    // Деструктор
    ~Student() {
        cout << "Деструктор класса Student вызван для " << name << endl;
    }

    // Аксессоры (getters)
    string getName() const { return name; }
    int getAge() const { return age; }
    double getAverageGrade() const { return averageGrade; }

    // Аксессоры (setters)
    void setName(const string& newName) { name = newName; }
    void setAge(int newAge) { age = newAge; }
    void setAverageGrade(double newGrade) { averageGrade = newGrade; }

    // Метод для вывода информации о студенте
    void display() const {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Средний балл: " << averageGrade << endl;
    }
};

};

