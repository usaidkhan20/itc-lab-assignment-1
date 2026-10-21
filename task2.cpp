#include <iostream>
using namespace std; // manesapce std not used

int main()
{
    cout << "part A" << endl;
    cout << "Orientation Day" << endl;         // statement terminator used
    cout << "Total students: " << 450 << endl; // << missing
    cout << "Seats left: " << 500 - 450 << endl;
    cout << "Have a nice day" << endl; // duoble quotes missing

    cout << "\n\npart B" << endl;
    cout << "Average: " << 60 + 70 + 80 / 3 << endl;   // before the fix
    cout << "Average: " << (60 + 70 + 80) / 3 << endl; // after the fix
    return 0;
}