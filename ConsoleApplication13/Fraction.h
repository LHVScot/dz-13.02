#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;

    int gcd(int a, int b);
    void reduce();

public:
    // ������������
    Fraction();
    Fraction(int num, int den);
    Fraction(const Fraction& other);

    // ����������
    ~Fraction();

    // ��������� (getters)
    int getNumerator() const;
    int getDenominator() const;

    // ��������� (setters)
    void setNumerator(int newNumerator);
    void setDenominator(int newDenominator);

    // ����� ��� ������ �����
    void display() const;
};

#endif