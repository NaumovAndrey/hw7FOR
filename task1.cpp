#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*Ваш космический корабль потерпел крушение на пустынной планете.
Еда здесь не растёт, но вы спасли из-под обломков 100-килограммовый мешок гречки.
Из прошлого опыта вы знаете, что если будете экономно питаться, то у вас будет уходить по четыре килограмма гречки в месяц.
Чтобы прикинуть гречневый бюджет, вы решили написать программу, которая выведет информацию о том,
сколько килограммов гречки у вас должно быть в запасе через месяц, два и так далее, пока она не закончится.*/

void task1() {
int countBuckwheat = 100;
cout << "Всего гречки было на начало подсчёта: " << countBuckwheat;
int j = 0;
    for (ini i = 100; i <= 0; i - 4){
        cout << "После " << i << "месяца у вас в запасе останется " << i << "кг гречки";
        j++;
    }
cout << "После " << j << "месяца гречка закончится";
}