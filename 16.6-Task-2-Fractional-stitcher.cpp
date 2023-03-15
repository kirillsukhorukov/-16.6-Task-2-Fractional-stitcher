#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double stitcher (const string& integer, const string& fractional)
{
    string tempStr = integer + '.' + fractional;
    cout << tempStr << endl;
    return stod(tempStr);
}

int main()
{
    cout << "-----Fractional stitcher-----" << endl;
    //Инициализация переменной точности отображения числа при выводе
    int precision = 10;
    //Пользовательский ввод целой и дробной части чмсел
    string integer;    
    cout << "Enter the integer part of the number: ";
    cin >> integer;
    string fractional;
    cout << "Enter the fractional part of the number: ";
    cin >> fractional;
    //Вывод результата с заданной точностью
    cout << setprecision(precision) << "Result: "<< stitcher(integer, fractional) << endl;
    return 0;
}