#include <iostream>
#include <climits>
using namespace std;

int findSecondSmallest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least two elements.\n";
        return -1;
    }

    int first = INT_MAX, second = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MAX) {
        cout << "No second smallest element found (all elements may be equal).\n";
        return -1;
    }

    return second;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " distinct elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int secondSmallest = findSecondSmallest(arr, n);

    if (secondSmallest != -1) {
        cout << "Second smallest element is: " << secondSmallest << endl;
    }

    return 0;
}