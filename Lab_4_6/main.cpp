#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double P, S;
    int k, i;

    P = 0.0;
    k = 1;
    while (k <= 15) {
        S = 1.0;
        i = 1;
        while (i <= k) {
            S *= sqrt(i);
            i++;
        }
        P += (sin(10 * k) + cos(10 * k)) / S;
        k++;
    }
    cout << "while :" << P << endl;

    P = 0.0;
    k = 1;
    do {
        S = 1.0;
        i = 1;
        do {
            S *= sqrt(i);
            i++;
        } while (i <= k);
        P += (sin(10 * k) + cos(10 * k)) / S;
        k++;
    } while (k <= 15);
    cout << "do-while: " << P << endl;

    P = 0.0;
    for (k = 1; k <= 15; k++) {
        S = 1.0;
        for (i = 1; i <= k; i++) {
            S *= sqrt(i);
        }
        P += (sin(10 * k) + cos(10 * k)) / S;
    }
    cout << "for(++): " << P << endl;

    P = 0.0;
    for (k = 15; k >= 1; k--) {
        S = 1.0;
        for (i = k; i >= 1; i--) {
            S *= sqrt(i);
        }
        P += (sin(10 * k) + cos(10 * k)) / S;
    }
    cout << "for(--): " << P << endl;

    return 0;
}

