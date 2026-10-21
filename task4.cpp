#include <iostream>
using namespace std;
int main()
{
    int rollNo = 1045;
    int semester = 1;
    char section = 'B';
    float cgpa = 3.5;
    int totalFee = 45000;
    int feePaid = 20000;

    cout << "Roll No: " << rollNo << endl;
    cout << "Semester: " << semester << endl;
    cout << "Section: " << section << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Total Fee: " << totalFee << endl;
    cout << "Fee Paid: " << feePaid << endl;

    semester = semester + 1;
    feePaid = feePaid + 5000;

    cout << "Semester: " << semester << endl;
    cout << "Fee Paid: " << feePaid << endl;

    int remainingFee = totalFee - feePaid;
    float percentagePaid = feePaid * 100.0 / totalFee;

    cout << "Remaining Fee: " << remainingFee << endl;
    cout << "Percentage Paid: " << percentagePaid << endl;

    return 0;
}