#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    double sum = 0.0;
    int i = 1;

    while (i <= n) {
        sum += 1.0 / i;
        i++;
    }

    cout << "The sum of the harmonic series up to 1/" << n << " is: " << sum << endl;

    return 0;
}
