#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int alphabets = 0, digits = 0, specialChars = 0;

    cout << "Enter a string: ";
    getline(cin, input); 

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            alphabets++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            specialChars++;
        }
    }

    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << specialChars << endl;

    return 0;
}