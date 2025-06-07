#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a = 8;
    int b = 0;
    int c = 0;

    cout << "Enter a number to divide 8 by: ";
    cin >> b;

    try {
        if (b == 0) {
            throw string("Your input is not valid, you can't divide by zero.");
        }
        c = a / b;
        cout << c << endl;
    }
    catch (const string& e) {
        cerr << e << endl;
        cout << 0 << endl;
    }

    return 0;
}
