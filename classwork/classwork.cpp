#include <iostream>
#include <string>

using namespace std;

void genLineVoid(char symb, int count) {
    for (int i = 0; i < count; ++i) {
        cout << symb;
    }
    cout << endl;
}

string genLine(char symb, int count) {
    string res = "";
    for (int i = 0; i < count; ++i) {
        res += symb;
    }
    return res;
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
    cout << endl;
    genLineVoid(symb, count);
    cout<<genLine(symb, count)<<endl;
    return 0;
}