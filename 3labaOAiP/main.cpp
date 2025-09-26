#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main() {
    double a, b, c, d;
    setlocale(LC_CTYPE, "rus" );
        cout << "Введите a (расход краски на 1 м^2): ";
    cin >> a;
    cout << "Введите b (объем банки краски в литрах): ";
    cin >> b;
    cout << "Введите c (потери краски в %): ";
    cin >> c;
    cout << "Введите d (площадь поверхности в м^2): ";
    cin >> d;


       double paintneeded = a * d;
     paintneeded = paintneeded * (1 + c / 100.0);
     int cans = ceil(paintneeded / b);
printf( "Необходимо банок краски: %d\n", cans);

    return 0;
}
