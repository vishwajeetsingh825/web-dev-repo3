#include <iostream>
using namespace std;

int main() {
    int num, largest = -1, secondLargest = -1;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        int digit = num % 10;
        if (digit > largest) {
            secondLargest = largest;
            largest = digit;
        } else if (digit > secondLargest && digit != largest) {
            secondLargest = digit;
        }
        num /= 10;
    }

    if (secondLargest != -1)
        cout << "Second largest digit: " << secondLargest << endl;
    else
        cout << "No second largest digit found." << endl;

    return 0;
}

