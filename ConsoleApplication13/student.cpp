#include "student.h"
#include <iostream>

using namespace std;

Student::Student() : name("Unknown"), age(18), averageGrade(0.0) {}

Student::Student(const string& name, int age, double grade) : name(name), age(age), averageGrade(grade) {}

Student::Student(const Student& other) : name(other.name), age(other.age), averageGrade(other.averageGrade) {}

Student::~Student() {
    cout << "Деструктор класса Student вызван для " << name << endl;
}

string Student::getName() const { return name; }

int Student::getAge() const { return age; }

double Student::getAverageGrade() const { return averageGrade; }

void Student::setName(const string& newName) { name = newName; }

void Student::setAge(int newAge) { age = newAge; }

void Student::setAverageGrade(double newGrade) { averageGrade = newGrade; }

void Student::display() const {
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << endl;
    cout << "Средний балл: " << averageGrade << endl;
}