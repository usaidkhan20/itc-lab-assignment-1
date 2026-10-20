#include <iostream>
using namespace std;
int main()
{
    cout << "Expression 1: " << 10 + 5 * 2 << endl;
    cout << "Expression 2: " << (10 + 5) * 2 << endl;
    cout << "Expression 3: " << 20 - 5 - 3 << endl; //left to right
    cout << "Expression 4: " << 100 / 7 << endl;
    cout << "Expression 5: " << 100 % 7 << endl;
    cout << "Expression 6: " << 2 * (3 + 8 / 4 - 1) << endl;

    return 0;
}
