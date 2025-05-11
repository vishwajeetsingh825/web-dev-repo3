#include <iostream>
using namespace std;

int main() {
    int num, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    // Loop to multiply each digit
    for (; num != 0; num /= 10) {
        product *= num % 10;  // Multiply the last digit
    }

    cout << "Product of digits = " << product << endl;
    return 0;
}
