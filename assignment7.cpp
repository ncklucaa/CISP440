#include <iostream>
using namespace std;

int main() {


    int P1;
    int P2;

    cout << "enter 2 binary numbers: ";
    cin >> P1 >> P2;

    int y2 = P2;
    int y1 = P1 ^ P2;

    cout << "2s complement: " << y1 << y2 << '\n';

    return 0;
}