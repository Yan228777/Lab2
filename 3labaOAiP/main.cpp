#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main() {
    double a, b, c, d;
    setlocale(LC_CTYPE, "rus" );
        cout << "������� a (������ ������ �� 1 �^2): ";
    cin >> a;
    cout << "������� b (����� ����� ������ � ������): ";
    cin >> b;
    cout << "������� c (������ ������ � %): ";
    cin >> c;
    cout << "������� d (������� ����������� � �^2): ";
    cin >> d;


       double paintneeded = a * d;
     paintneeded = paintneeded * (1 + c / 100.0);
     int cans = ceil(paintneeded / b);
printf( "���������� ����� ������: %d\n", cans);

    return 0;
}
