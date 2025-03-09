#include <iostream>
#include <cmath>
using namespace std;

// Функция для вычисления периметра
void perimeter(double& result, double a, double b, double c) {
    result = a + b + c;
}

//       Функция для вычисления площади по формуле Герона
void plosh(double& result, double a, double b, double c) {
    double s = (a + b + c) / 2; // Полупериметр
    result = sqrt(s * (s - a) * (s - b) * (s - c)); // Формула Герона
}

// Функция для проверки на равнобедренность
void ravnob(bool& result, double a, double b, double c) {
    result = (a == b || b == c || a == c);
}

int main() {
    double a, b, c;
    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;

    // Проверка существования треугольника
    if (a + b > c && a + c > b && b + c > a) {
        int input;
        cout << "Что вы хотите определить?:" << endl
            << "1) Периметр" << endl
            << "2) Площадь" << endl
            << "3) Проверить на равнобедренность" << endl
            << "4) Все вместе" << endl;
        cin >> input;

        switch (input) {
        case 1: {
            double perimeterResult;
            perimeter(perimeterResult, a, b, c);
            cout << "Периметр треугольника: " << perimeterResult << endl;
            break;
        }
        case 2: {
            double ploshResult;
            plosh(ploshResult, a, b, c);
            cout << "Площадь треугольника: " << ploshResult << endl;
            break;
        }
        case 3: {
            bool isRavnob;
            ravnob(isRavnob, a, b, c);
            if (isRavnob) {
                cout << "Треугольник является равнобедренным." << endl;
            }
            else {
                cout << "Треугольник не является равнобедренным." << endl;
            }
            break;
        }
        case 4: {
            double perimeterResult, ploshResult;
            bool isRavnob;
            perimeter(perimeterResult, a, b, c);
            plosh(ploshResult, a, b, c);
            ravnob(isRavnob, a, b, c);

            cout << "Периметр треугольника: " << perimeterResult << endl;
            cout << "Площадь треугольника: " << ploshResult << endl;
            if (isRavnob) {
                cout << "Треугольник является равнобедренным." << endl;
            }
            else {
                cout << "Треугольник не является равнобедренным." << endl;
            }
            break;
        }
        default: {
            cout << "Неверный выбор!" << endl;
            break;
        }
        }
    }
    else {
        cout << "Треугольник с такими сторонами не существует." << endl;
    }

    return 0;
}
