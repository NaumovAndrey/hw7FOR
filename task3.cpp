#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*� ������ ���������� ���� ���������� ���, ��� �� ���������� � �����������
� ������ ������ ��� �� ������� ���������� ��������� ��� ������ ������-���������� ����������� �����.
��� ������ ��������, ������� �� ����������� � ������������� ��������� �������� 15 �� 20 ������.
�������� ������������ � ������ �������, ����� ���� ���������� �� ��������� ��������� � ������������ ����� ���������.
��������� ����������, � ����� ������� �������� ����� ��������� ������:
����� (������� W), �� (������� S), ����� (������� A) ��� ������ (������� D).
�������� ������ �����, �������� ������������ �� 1 ���� � ��� ������� � ��������� �������� ����� ������� ���������. 
���� �������� ����� � �����, �� �� �� ������ �������� ������������ � ������� �����, � ���� ������ ��� ������� �� ��������.*/

void task3() {
	string user;
	const int width = 14, height = 20, step = 1;
	int x = 7, y = 10;

	cout << "�������� ��������� � �������, �������� �� ��� X: " << width << " �� ��� Y: " << height << endl;

	while (true)
	{
		cout << "���������� ���������� ��������� �� ��� X: " << x << " �� ��� Y: " << y << endl;
		cout << "� ����� ������� �������� ����� ��������� ������: ����� (W), �� (S), ����� (A), ������ (D),  ��� ������ ������� 0 --> ";
		cin >> user;

		if (user == "w" || user == "W") {
			if (y + step <= height) y++; 
			else cout << "����� ����� � �����!" << endl;
		}
		else if (user == "d" || user == "D") {
			if (x + step <= width) x++;
			else cout << "����� ����� � �����!" << endl;
		}
		else if (user == "s" || user == "S") {
			if (y - step >= 0) y--;
			else cout << "����� ����� � �����!" << endl;
		}
		else if (user == "a" || user == "A") {
			if (x - step >= 0) x--;
			else cout << "����� ����� � �����!" << endl;
		}
		else if (user == "0") {
			break;
		}
		else cout << "������������ �������!" << endl;
	}
	cout << "���������� ����� ���������.....������� ����� �������.....";
}