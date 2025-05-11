#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int lcm = (a > b) ? a : b;  
    
    while (lcm % a != 0 || lcm % b != 0) {
        lcm++;
    }

    cout << "LCM: " << lcm << endl;
    return 0;
}
