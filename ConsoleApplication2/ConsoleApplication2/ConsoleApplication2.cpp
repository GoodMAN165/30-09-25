#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int randomnum = rand() % 500 + 1;
    int usernum;
    int attempt = 0;

    cout << "Угадайте число\n";

    cout << "Введите ваше число: "; cin >> usernum; 
    
    
        while (usernum != randomnum) {
        switch (usernum) {
        case 0:
            cout << "Игра закончена!";
            return 0;
        default:
            if (usernum < randomnum) {
                cout << "Ваше число меньше заданого\n";
                cout << "Введите ваше число: "; cin >> usernum;
                attempt++;
            }
            else {
                cout << "Ваше число больше заданого\n";
                cout << "Введите ваше число: "; cin >> usernum;
                attempt++;
            }
        }
    }
    
    
    cout << "Вы победили!\n" << "Кол-во попыток: " << attempt;

    return 0;
}
