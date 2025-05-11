#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    cout<<"sum of square of first natural number :"  << sum << endl;

    return 0;
}


