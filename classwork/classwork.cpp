#include <iostream>
#include <string>

using namespace std;

void genLineVoid(char symb, int count) {
    for (int i = 0; i < count; ++i) {
        cout << symb;
    }
    cout << endl;
}

bool ispositive(int numb) {
    return (numb > 0);
}

string genLine(char symb, int count) {
    string res = "";
    for (int i = 0; i < count; ++i) {
        res += symb;
    }
    return res;
}

//void max(int num1=0, int num2=-2) {
//    (num1 < num2) ? cout << num2 << endl : cout << num1 << endl;
//}

void countsymb(string text, char symb) {
    int founded = 0;
    bool work = true;
    do {
        int isfind = text.find(symb);
        if (isfind == string::npos) {
            work = false;
        }
        else {
            ++founded;
            text.erase(isfind,1);
            cout << text << endl;
        }
    } while (work);

    cout << "Всього: " << founded << " данного символу\n";
}

int cube(int num) {
    return num * num * num;
}

//int fuctorial(int n) {
//    int res = 1;
//    for (int i = 1; i <= n; ++i) res *= i;
//    return res;
//}

int fuctorial(int n) {
    if (n < 1) return 1;
    return n*fuctorial(n-1);
}

int sum(int start, int end) {
    if (start >= end) return 0;
    return start + sum(start+1, end);
}

void gen(int n) {
    if (n < 0) { cout << endl; return; }
    cout << '*';
    gen(n - 1);
}

template <typename T, typename N>
N max(T x, N y) {
    return x > y ? x : y;
}

template <typename A, typename S>
double average(A ar[], S size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) sum += ar[i];
    return sum / size;
}

// Prototype
int maxReturn(int num1 = 0, int num2 = -2);

void remove(string text, char symb);

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
    
    //max();
    //max(10, 15);
    //cout << maxReturn() << endl;
    //cout << maxReturn(10, 15) << endl;

    // 21.03
    //cout<<ispositive(-1);

    //string text;
    //char symb;
    //cout << "Введіть рядок: ";
    //getline(cin, text);
    //cout << "Введіть символ: ";
    //cin >> symb;
    ////countsymb(text, symb);
    //remove(text, symb);

    //int numb;
    //cout << "Введіть Число: ";
    //cin >> numb;
    //cout << cube(numb) << endl;

    //cout << max(5, 23) << endl;
    //cout << max(5.0, 2.3) << endl;
    //cout << max(5, 2.3) << endl;
    //cout << max('5', 'A') << endl;

    //cout << fuctorial(3) << endl;

    //gen(5);

    int ar1[5] = { 10,2,32,14,55 };
    float ar2[5]{ 1.1,2.2,3.3,4.4,5.5 };

    cout << average(ar1, 5) << endl;
    cout << average(ar2, 5) << endl;

    return 0;
}

int maxReturn(int num1, int num2) {
    return (num1 < num2) ? num2 : num1;
}

void remove(string text, char symb) {
    bool work = true;
    do {
        int isfind = text.find(symb);
        if (isfind == string::npos) {
            work = false;
        }
        else {
            
        }
    } while (work);

    cout << text << endl;
}