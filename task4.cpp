#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*�������� ���������, ������� ������ � ������� ���������� ������� ������������� �����.
��� ������������ ����� ����������� ������ ������������� ������ �|�,
� ��� �������������� � ����� �-�. ����� ������������ ������ ������ � ������ �����.*/
void task4() {
    int width, height;

    cout << "������� ������ � ������ ����� ����� ������: ";
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