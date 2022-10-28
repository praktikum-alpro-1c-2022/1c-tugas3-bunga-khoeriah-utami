#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main () {
    float b = 25, x = 15, c = 20;
    float Y;

    cout << "Nilai b = " << b << endl;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai c = " << c << endl;

    cout << "Selesaikan persamaan berikut Y = bx^2 + 0.5x - c" << endl;
    Y = (b * x * x) + 0.5 *  x -c;
    cout << "Nilai Y = " << Y << endl;

    return 0;
}
