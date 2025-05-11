#include <iostream>
using namespace std;

int main() {
    int num, sum;

    cout << "Enter a number: ";
    cin >> num;

    
    while (num >= 10) {
        sum = 0;

    
        while (num != 0) {
            sum += num % 10;  
            num /= 10;  
        }

        num = sum;
    }

    cout << "Single digit result = " << num << endl;
    return 0;
}
