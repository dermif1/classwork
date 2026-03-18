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

void max(int num1=0, int num2=-2) {
    (num1 < num2) ? cout << num2 << endl : cout << num1 << endl;
}

// Prototype
int maxReturn(int num1 = 0, int num2 = -2);

int main()
{
    system("chcp 1251>null");
    locale::global(std::locale("uk_UA.utf8"));

    //18.03
    //char symb;
    //int count;
    //cout << "Введіть символ: ";
    //cin >> symb;
    //cout << "Введіть кількість символ: ";
    //cin >> count;
    //cout << endl;
    //genLineVoid(symb, count);
    //cout<<genLine(symb, count)<<endl;
    
    max();
    max(10, 15);
    cout << maxReturn() << endl;
    cout << maxReturn(10, 15) << endl;

    return 0;
}

int maxReturn(int num1, int num2) {
    return (num1 < num2) ? num2 : num1;
}