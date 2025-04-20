#include<iostream>
 using namespace std;

int main() {
     int decimal, num; 
     cout << "Enter a decimal number: "; 
     cin >> decimal;
int binary[32]; 
int i = 0;
 num = decimal;
  while (num > 0) {
     binary[i] = num % 2;
      num /= 2; i++;
     } 
     cout << "Binary: ";
      if (decimal == 0)
       cout << 0;
        for (int j = i - 1; j >= 0; j--) {
             cout << binary[j];
             }
              cout << endl;
               int octal[32];
                i = 0; 
                num = decimal;
                 while (num > 0) { 
                    octal[i] = num % 8;
                     num /= 8; i++;
                     }
                      cout << "Octal: ";
                       if (decimal == 0) 
                       cout << 0;
                        for (int j = i - 1; j >= 0; j--) {
                             cout << octal[j];
                             }
                              cout << endl;
                               return 0; 
}