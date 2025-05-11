#include <iostream>
using namespace std;

int main() {
    int base, exponent, result = 1;
    cin >> base >> exponent;

    
    while (exponent > 0) {
        result *= base;
        exponent--;
    }

    cout << "Result: " << result << endl;
    return 0;
}
