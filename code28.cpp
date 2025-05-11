#include <iostream>
#include <string>
using namespace std;

int main() {
    string input = "hello";
    int i = input.length() - 1;
    
    
    while (i >= 0) {
        cout << input[i];
        i--;
    }

    cout << endl;
    return 0;
}
