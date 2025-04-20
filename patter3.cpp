#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }

        if (i < n) {
            cout << "   ";
        }

            string secondPart = "";
        for (int j = i; j >= 1; --j) {
            secondPart += to_string(j);
        }

        if (i < n) { 
            cout << secondPart;
        } else {
            cout << secondPart.substr(0, secondPart.length());
        }
            cout << std::endl;
    }

    return 0;
}