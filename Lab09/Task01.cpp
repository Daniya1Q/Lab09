/*
#include <iostream>

using namespace std;

int reverseDigits(int number) {
    int reversedNumber = 0;
    while (number > 0) {
        reversedNumber = (reversedNumber * 10) + (number % 10);
        number /= 10;
    }
    return reversedNumber;
}

int main() {
    int number;
    cout << "Enter an integer value: ";
    cin >> number;
    int reversedNumber = reverseDigits(number);
    cout << "Reversed number: " << reversedNumber << endl;
    return 0;
}
*/