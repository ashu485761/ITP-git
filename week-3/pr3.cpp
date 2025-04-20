#include <iostream>
#include <string>
using namespace std;

string removeNonAlphabets(string str) {
    string result = " ";
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            result += ch;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string cleanedString = removeNonAlphabets(input);
    cout << "removing non-alphabet characters: " << cleanedString << endl;

    return 0;
}