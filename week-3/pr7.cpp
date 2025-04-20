#include <iostream>
using namespace std;

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to remove: ";
    cin >> ch;

    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) {
            result += str[i];
        }
    }

    cout << "String after removing '" << ch << "': " << result << endl;

    return 0;
}