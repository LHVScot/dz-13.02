#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;

    int gcd(int a, int b);
    void reduce();

public:
    // Конструкторы
    Fraction();
    Fraction(int num, int den);
    Fraction(const Fraction& other);

    // Деструктор
    ~Fraction();

    // Аксессоры (getters)
    int getNumerator() const;
    int getDenominator() const;

    // Аксессоры (setters)
    void setNumerator(int newNumerator);
    void setDenominator(int newDenominator);

    // Метод для вывода дроби
    void display() const;
};

#endif