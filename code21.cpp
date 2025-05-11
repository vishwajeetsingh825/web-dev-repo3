#include <iostream>
using namespace std;

int main() {
    int num, largest;

    cout << "Enter a number: ";
    cin >> num;

    largest = num % 10;
    
    for (; num != 0; num /= 10) {
        int digit = num % 10;  
        if (digit > largest) {
            largest = digit;  
        }
    }

    cout << "Largest digit = " << largest << endl;
    return 0;
}
