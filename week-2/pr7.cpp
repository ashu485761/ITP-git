#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n to find the Nth fibonacci number: ";
    cin >> n;

    if (n < 0) {
        cout << "Fibonacci number is not defined for negative integers." << endl;
    } else {
        int result = fibonacci(n);
        cout << "The " << n << "th fibonacci number is: " << result << endl;
    }

    return 0;
}