#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int count = 0;
    while (number) {
        number /= 10;
        count++;
    }

    cout << count << endl;
    return 0;
}
