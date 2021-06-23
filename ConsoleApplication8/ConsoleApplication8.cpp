#include <conio.h>
#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    double number, deg;
    std::cout << "Введите число и степень" << std::endl;
    std::cin >> number >> deg;
    std::cout << "Резульат " << pow(number, deg) << std::endl;
    _getch();
    return EXIT_SUCCESS;
}





#include<iostream>
#include<math.h>
using namespace std;
template <typename T> T rounding_numbers(T k, T n)
{
    return k * pow(10, (n + 1));
}
template <typename T> T rounding_numbers(T n)
{
    return pow(10, (n + 1));
}
void main()
{
    setlocale(LC_ALL, "rus");
    double capacity, number;
    int a;
    cout << "Входной номер\n";
    cin >> number;
    cout << "Входная ёмкость\n";
    cin >> capacity;
    a = rounding_numbers(number, capacity);
    a % 10;
    if (a % 10 < 5)
        number = (a - a % 10) / rounding_numbers(capacity);
    if (a % 10 >= 5)
        number = (a - a % 10 + 10) / rounding_numbers(capacity);
    cout << "\n" << number << "\n";

}