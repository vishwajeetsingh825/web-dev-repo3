#include <iostream>
using namespace std;

int main() {
    int number, original, reversed = 0;
    cin >> number;
    original = number;

    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    if (original == reversed)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
