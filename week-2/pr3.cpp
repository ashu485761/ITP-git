#include <iostream>
using namespace std;

void copyArray(int src[], int dest[], int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int source[n], destination[n];
    cout << "Enter elements of the source array: ";
    for (int i = 0; i < n; i++) {
        cin >> source[i];
    }

    copyArray(source, destination, n);

    cout << "Elements of the copying array: ";
    for (int i = 0; i < n; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}