#include <iostream>
using namespace std;

int main() {
    int A[8] = {0,0,0,0,1,1,1,1};
    int B[8] = {0,0,1,1,0,0,1,1};
    int C[8] = {0,1,0,1,0,1,0,1};
    int Alarm[8];

    cout << "A B C | Alarm\n";
    cout << "-------------\n";

    for (int i = 0; i < 8; i++) {
        Alarm[i] = (A[i] & B[i]) | (A[i] & C[i]) | (B[i] & C[i]);
        cout << A[i] << " " << B[i] << " " << C[i] << " |   " << Alarm[i] << endl;
    }

    return 0;
}
