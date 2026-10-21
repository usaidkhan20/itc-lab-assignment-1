#include <iostream>
using namespace std;

int main()
{
    int price, quantity, total, tax, grandTotal;

    cout << "Enter price= ";
    cin >> price;

    cout << "Enter quantity= ";
    cin >> quantity;

    total = price * quantity;
    tax = total * 5 / 100;
    grandTotal = total + tax;

    cout << "Total= " << total << endl;
    cout << "Tax= " << tax << endl;
    cout << "Grand Total= " << grandTotal << endl;
    // the program gives tax=34 because we used int data type instead of float
    return 0;
}