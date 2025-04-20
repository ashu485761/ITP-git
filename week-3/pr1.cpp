#include <iostream>
using namespace std;

void moveNegativesToLeft(int arr[], int n) {
    int j = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements (positive and negative): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveNegativesToLeft(arr, n);

    cout << "Array after moving negative elements to one side:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}