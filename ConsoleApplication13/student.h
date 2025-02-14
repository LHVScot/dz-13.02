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
    // ����������� �� ���������
    Student() : name("Unknown"), age(18), averageGrade(0.0) {}

    // ����������� � �����������
    Student(const string& name, int age, double grade) : name(name), age(age), averageGrade(grade) {}

    // ����������� �����������
    Student(const Student& other) : name(other.name), age(other.age), averageGrade(other.averageGrade) {}

    // ����������
    ~Student() {
        cout << "���������� ������ Student ������ ��� " << name << endl;
    }

    // ��������� (getters)
    string getName() const { return name; }
    int getAge() const { return age; }
    double getAverageGrade() const { return averageGrade; }

    // ��������� (setters)
    void setName(const string& newName) { name = newName; }
    void setAge(int newAge) { age = newAge; }
    void setAverageGrade(double newGrade) { averageGrade = newGrade; }

    // ����� ��� ������ ���������� � ��������
    void display() const {
        cout << "���: " << name << endl;
        cout << "�������: " << age << endl;
        cout << "������� ����: " << averageGrade << endl;
    }
};

};

