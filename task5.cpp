#include <iostream>
using namespace std;
int main()
{
    int age;
    int feePerCreditHour;
    int credithours;
    int totalfee;
    int discount = 2000;
    int feeaftdiscount;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter credit hours: ";
    cin >> credithours;

    cout << "Enter fee per credit hour: ";
    cin >> feePerCreditHour;

    totalfee = credithours * feePerCreditHour;
    feeaftdiscount = totalfee - discount;

    cout << "your total fee is=" << totalfee << endl;
    cout << "yout discounted fee is=" << feeaftdiscount << endl;

    int yob;
    yob = 2026 - age;

    cout << "your year of birth is=" << yob << endl;
    cout << "you will turn 25 in=" << yob + 25 << endl;

    return 0;
}