#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    float x, y, r;
    bool b;
    cout << "Введите координаты выстрела ";
    cin >> x >> y;
    cout << "Введите радиус мишени ";
    cin >> r;
    b = (pow(x,2)+pow(y,2)<=r*r);
    cout << "\nВы попали? " << (bool)b << endl;
}