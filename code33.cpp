#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 1;

    while (num < 1000) {
        int original = num, sum = 0, digits = 0;

        
        int temp = num;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }


        
        temp = num;
        while (temp != 0) {
            sum += pow(temp % 10, digits);
            temp /= 10;
        }

        if (sum == original) {
            cout << original << " ";
        }

        num++;
    }

    cout << endl;
    return 0;
}
