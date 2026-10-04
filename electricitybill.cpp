#include <iostream>
using namespace std;

int main() {

    double units;
    double totalBill = 0.0;

    cout << "Enter total units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid input. Units consumed cannot be negative." << endl;
        return 1;
    }

    if (units <= 100) {
        totalBill = units * 5.0;
    } 
    else if (units <= 200) {
        totalBill = (100 * 5.0) + ((units - 100) * 7.0);
    } 
    else {
        totalBill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    }

    cout << "Total Electricity Bill: " << totalBill << endl;

    return 0;
}