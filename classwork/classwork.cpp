#include <iostream>

using namespace std;

void genLineVoid(char symb, int count) {
    for (int i = 0; i < count; ++i) {
        cout << symb;
    }
    cout << endl;
}

int genLineInt(char symb, int count) {
    for (int i = 0; i < count; ++i) {
        cout << symb;
    }
    cout << endl;
    return 0;
}

int main()
{
    system("chcp 1251>null");
    locale::global(std::locale("uk_UA.utf8"));

    //18.03
    char symb;
    int count;
    cout << "Введіть символ: ";
    cin >> symb;
    cout << "Введіть кількість символ: ";
    cin >> count;
    genLineVoid(symb, count);
    genLineInt(symb, count);
    return 0;
}