#include <iostream>
#include <stdexcept>

using namespace std;

int main(void) {
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Enter the dividend (a): ";
    cin >> a;

    cout << "Enter the divisor (b): ";
    cin >> b;

    try {
        if (b == 0) {
            throw runtime_error("Your input is not valid, you can't divide by zero.");
        }
        c = a / b;
        cout << c << endl;
    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
