#include "fraction.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int Fraction::gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void Fraction::reduce() {
    if (denominator == 0) {
        throw invalid_argument("Деление на ноль!");
    }

    if (numerator == 0) {
        denominator = 1;
        return;
    }

    int common = gcd(numerator, denominator);
    numerator /= common;
    denominator /= common;

    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
    reduce();
}

Fraction::Fraction(const Fraction& other) : numerator(other.numerator), denominator(other.denominator) {}

Fraction::~Fraction() {
    cout << "Деструктор класса Fraction вызван (" << numerator << "/" << denominator << ")" << endl;
}

int Fraction::getNumerator() const { return numerator; }

int Fraction::getDenominator() const { return denominator; }

void Fraction::setNumerator(int newNumerator) { numerator = newNumerator; reduce(); }

void Fraction::setDenominator(int newDenominator) { denominator = newDenominator; reduce(); }

void Fraction::display() const {
    if (denominator == 1) {
        cout << numerator;
    }
    else {
        cout << numerator << "/" << denominator;
    }
}