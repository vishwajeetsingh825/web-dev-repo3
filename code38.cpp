#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    while (n > 1) {
        fact *= n--;
    }
    return fact;
}

int main() {
    int num, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is a Strong Number." << endl;
    else
        cout << num << " is not a Strong Number." << endl;

    return 0;
}
