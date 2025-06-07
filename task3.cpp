#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

const int DivideByZeroErrorCode = 111;

float internaldiv(float arg1, float arg2) {
    if (arg2 == 0.0f) {
        throw DivideByZeroErrorCode;
    }
    return arg1 / arg2;
}

float div(float arg1, float arg2) {
    return internaldiv(arg1, arg2);
}

int main() {
    float r, a, b;

    cout << "Введіть два числа для ділення (або нечисловий ввід для виходу):" << endl;

    while (cin >> a >> b) {
        try {
            r = div(a, b);
            cout << "Результат: " << r << endl;
        } catch (int errorCode) {
            if (errorCode == DivideByZeroErrorCode) {
                cout << "Помилка: Спроба ділення на нуль! Введіть інший дільник." << endl;
            } else {
                cout << "Невідома помилка з кодом: " << errorCode << endl;
            }
        }
        cout << "\nВведіть наступну пару чисел (або нечисловий ввід для виходу):" << endl;
    }

    cout << "Завершення програми." << endl;
    return 0;
}
