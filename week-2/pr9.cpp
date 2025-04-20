#include <iostream>
using namespace std;

void printArrayRecursively(int arr[], int size, int index = 0) {
    if (index == size)
        return;

    cout << arr[index] << " ";
    printArrayRecursively(arr, size, index + 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    printArrayRecursively(arr, n);
    cout << endl;

    return 0;
}