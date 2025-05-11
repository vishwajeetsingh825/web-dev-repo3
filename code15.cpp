#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers between 1 and 50 are: ";

    for (int num = 2; num <= 50; num++) {
        int count = 0;

        // Check how many numbers divide 'num'
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                count++;
            }
        }

        // Prime number has only two divisors: 1 and itself
        if (count == 2) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}


