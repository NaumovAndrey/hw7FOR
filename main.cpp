#include "pch.h"
#include "iostream"
#include <conio.h>
#include <clocale>
#include "iostream"

using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();

int main() {
    setlocale(LC_ALL, "Rus");

    cout << "Домашняя работа к седьмой лекции. Циклы for и алгоритмы на циклах" << endl;


    while (true)
    {
        cout << "1: Запасы продовольствия." << endl;
        cout << "2: Кофемашина." << endl;
        cout << "3: Красный Марс." << endl;
        cout << "4: Рамка." << endl;
        cout << "5: Координатные оси." << endl;
        cout << "6: Важные объявления." << endl;
        cout << "Введите число от 1 до 6 или что-то другое для выхода: ";
        int task;
        cin >> task;

        if (task == 1) {
            system("cls");
            cout << "Запасы продовольствия." << endl;
            task1();
            _getch();
            system("cls");
        }

        else if (task == 2) {
            system("cls");
            cout << "Кофемашина." << endl;
            task2();
            _getch();
            system("cls");;
        }

        else if (task == 3) {
            system("cls");
            cout << "Красный Марс." << endl;
            task3();
            _getch();
            system("cls");
        }

        else if (task == 4) {
            system("cls");
            cout << "Рамка." << endl;
            task4();
            _getch();
            system("cls");
        }

        else if (task == 5) {
            system("cls");
            cout << "Координатные оси." << endl;
            task5();
            _getch();
            system("cls");
        }

        else if (task == 6) {
            system("cls");
            cout << "Задача №6: Важные объявления. " << endl;
            task6();
            _getch();
            system("cls");
        }

        else
        {
            system("cls");
            cout << "некорректный ввод. Выход из программы";
            break;
        }
    }

}
