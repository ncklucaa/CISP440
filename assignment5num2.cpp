/*
Nick Luca
CISP 440 Professor Suha Al Juboori
Assignment 5 Number 2
*/

#include <iostream>
using namespace std;

int main() {
    bool p[4], q[4];

    for (int i = 3; i >= 0; i--) {
        p[3 - i] = (i & 2) / 2;
        q[3 - i] = i & 1;
    }
    cout << "p q  p&q  !(p&q)  p|!(p&q)\n";
    
    bool isTautology = 1;
    for (int i = 0; i < 4; i++) {
        bool result = (p[i] || !(p[i] && q[i]));
        cout << p[i] << " " << q[i] << "   " << (p[i] && q[i]) << "     " << (!(p[i] && q[i])) << "        " << result << '\n';
        
        if (!result) {
            isTautology = 0;
        }
    }
    
    cout << "\nverifying... ";
    if (isTautology) {
        cout << "\n result: a tautology" << '\n';
    } else {
        cout << "result: not a tautology" << '\n';
    }

    return 0;
}
