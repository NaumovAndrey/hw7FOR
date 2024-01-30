#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*Напишите программу, которая рисует с помощью символьной графики прямоугольную рамку.
Для вертикальных линий используйте символ вертикального штриха «|»,
а для горизонтальных — дефис «-». Пусть пользователь вводит ширину и высоту рамки.*/
void task4() {
    int width, height;

    cout << "Введите ширину и высоту рамки через пробел: ";
    cin >> width >> height;

    for (int i = 0; i < width; i++) {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < height - 2; i++) {
        cout << "|";
        for (int j = 0; j < width - 2; j++) {
            cout << " ";
        }
        cout << "|" << endl;
    }

    for (int i = 0; i < width; i++) {
        cout << "-";
    }
    cout << endl;
}