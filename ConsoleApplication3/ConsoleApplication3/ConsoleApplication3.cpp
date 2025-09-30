#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    short userInput;
    double ValValue;
    cout << "Таблица доступных валют:\n USD - 1\n RUB - 2\n EUR - 3\n Ввод другого числа означает выход\n" << "Введите число: "; cin >> userInput;
    cout << "Введите кол-во выбранной валюты: "; cin >> ValValue;
    
    while (userInput != 4) {
        switch (userInput)
        {
        case 1:
            cout << "RUB: " << ValValue * 83 << "\n EUR: " << ValValue / 0.8 << endl;
            cout << "Введите число: "; cin >> userInput;
            cout << "Введите кол-во выбранной валюты: "; cin >> ValValue;
            break;
        case 2:
            cout << "USD: " << ValValue / 83 << "\n EUR: " << ValValue / 0.01 << endl;
            cout << "Введите число: "; cin >> userInput;
            cout << "Введите кол-во выбранной валюты: "; cin >> ValValue;
            break;
        case 3:
            cout << "USD: " << ValValue * 0.8 << "\n RUB: " << ValValue * 0.01 << endl;
            cout << "Введите число: "; cin >> userInput;
            cout << "Введите кол-во выбранной валюты: "; cin >> ValValue;
            break;
        }
    }
    return 0;
}

