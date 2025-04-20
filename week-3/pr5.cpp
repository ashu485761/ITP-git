#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements (with possible duplicates): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newArr[n];
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        if (!isPresent(newArr, newSize, arr[i])) {
            newArr[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "Array with distinct elements: ";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}