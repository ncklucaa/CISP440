/*
Nick Luca
CISP 440 Professor Suha Al Juboori
Assignment 5
Number 1. Write a C++ program to construct the truth table of P ∨￢(Q ∧ R)
*/

#include <iostream>
using namespace std;

int main() {
    bool p[8], q[8], r[8];

    for (int i = 7; i >= 0; i--) {
        p[7 - i] = (i & 4) / 4;
        q[7 - i] = (i & 2) / 2;
        r[7 - i] = i & 1;
    }

    cout << "p q r  q&r  !(q&r)  p|!(q&r)\n";
    for(int i=0; i<8; i++) {
        cout << p[i] << " " << q[i] << " " << r[i] << "   " << (q[i]&&r[i]) << "     " << !(q[i]&&r[i]) << "       " << (p[i]||!(q[i]&&r[i])) << endl;
    }
}
