#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

  
    while (n > 0) {
        int num = n;
        

        while (num > 0) {
            cout << num << " ";
            num--;
        }
        
        cout << endl;
        n--;
    }

    return 0;
}
