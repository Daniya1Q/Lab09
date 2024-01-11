/*
#include <iostream>
#include <iomanip>
using namespace std;

double calculateCharges(double hours) {
    double charge = 2.00;

    if (hours > 3) {
        charge += (hours - 3) * 0.50;
    }

    if (charge > 10.00) {
        charge = 10.00;
    }

    return charge;
}

int main() {
    double hours1, hours2, hours3;
    double charges1, charges2, charges3;
    double totalCharges;

    cout << "Enter the hours parked for each customer:" << endl;
    cout << "Customer 1: ";
    cin >> hours1;
    cout << "Customer 2: ";
    cin >> hours2;
    cout << "Customer 3: ";
    cin >> hours3;

    charges1 = calculateCharges(hours1);
    charges2 = calculateCharges(hours2);
    charges3 = calculateCharges(hours3);

    totalCharges = charges1 + charges2 + charges3;

    cout << fixed << setprecision(2);
    cout << "Car\tHours\tCharges" << endl;
    cout << "1\t" << hours1 << "\t" << charges1 << endl;
    cout << "2\t" << hours2 << "\t" << charges2 << endl;
    cout << "3\t" << hours3 << "\t" << charges3 << endl;
    cout << "Total\t" << hours1 + hours2 + hours3 << "\t" << totalCharges << endl;

    return 0;
}
*/