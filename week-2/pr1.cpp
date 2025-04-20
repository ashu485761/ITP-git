#include <iostream> 
using namespace std;

int main() { 
    int a[100], b[100], merged[200], n, m; 

    cout << "Enter size of first array: "; 
    cin >> n; 

    cout << "Enter elements of first array: "; 
    for(int i = 0; i < n; i++){ 
    cin >> a[i]; 
    }

    cout << "Enter size of second array: "; 
    cin >> m; 

    cout << "Enter elements of second array: "; 
    for(int i = 0; i < m; i++){ 
    cin >> b[i]; 
    }

    for(int i = 0; i < n; i++){ 
    merged[i] = a[i]; 
    }

    for(int i = 0; i < m; i++){
    merged[n + i] = b[i]; 
    }

    cout << "Merged array in reverse order: "; 
    for(int i = n + m - 1; i >= 0; i--){ 
    cout << merged[i] << " "; 
    }

    return 0; 
}
