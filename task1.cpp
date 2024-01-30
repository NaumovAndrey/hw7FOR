#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*��� ����������� ������� �������� �������� �� ��������� �������.
��� ����� �� �����, �� �� ������ ��-��� �������� 100-������������� ����� ������.
�� �������� ����� �� ������, ��� ���� ������ �������� ��������, �� � ��� ����� ������� �� ������ ���������� ������ � �����.
����� ��������� ��������� ������, �� ������ �������� ���������, ������� ������� ���������� � ���,
������� ����������� ������ � ��� ������ ���� � ������ ����� �����, ��� � ��� �����, ���� ��� �� ����������.*/

void task1() {
    const int startingAmount = 100; 
    const int monthlyUsage = 4;  
    int reserve = startingAmount, countMonth = 0;

    cout << "����� ������ ���� �� ������ ��������: " << reserve << " ��" << endl;

    for (int month = 1; reserve >= monthlyUsage; month++) {
        reserve -= monthlyUsage;
        cout << "����� " << month << " ������ � ��� � ������ ��������� " << reserve << " �� ������." << endl;
        countMonth++;
    }
    cout << "����� " << countMonth << " ������ ������ �����������" << endl;
}
