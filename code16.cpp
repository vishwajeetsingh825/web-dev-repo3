#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    
    if (count == 2) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
