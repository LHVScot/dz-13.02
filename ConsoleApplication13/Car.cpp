#include "car.h"
#include <iostream>

using namespace std;

Car::Car() : brand("Unknown"), model("Unknown"), year(2000) {}

Car::Car(const string& brand, const string& model, int year) : brand(brand), model(model), year(year) {}

Car::Car(const Car& other) : brand(other.brand), model(other.model), year(other.year) {}

Car::~Car() {
    cout << "Деструктор класса Car вызван для " << brand << " " << model << endl;
}

string Car::getBrand() const { return brand; }

string Car::getModel() const { return model; }

int Car::getYear() const { return year; }

void Car::setBrand(const string& newBrand) { brand = newBrand; }

void Car::setModel(const string& newModel) { model = newModel; }

void Car::setYear(int newYear) { year = newYear; }

void Car::display() const {
    cout << "Марка: " << brand << endl;
    cout << "Модель: " << model << endl;
    cout << "Год выпуска: " << year << endl;
}