#include <iostream>
using namespace std;

int main() {
    int num, smallest;

    cout << "Enter a number: ";
    cin >> num;

    smallest = num % 10;  

    
    for (; num != 0; num /= 10) {
        int digit = num % 10;  
        if (digit < smallest) {
            smallest = digit;  
    }
}

    cout << "Smallest digit = " << smallest << endl;
    return 0;
}
