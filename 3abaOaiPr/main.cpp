#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus" );

    double x,y,z;
    printf( "Введите x,y,z:");
    scanf("%lf %lf %lf", &x, &y, &z);

    double num1 = 1 + pow(sin(x + y), 2);
    double sum = 1 + pow(x,2)* pow(y,2);
    double num2 = fabs(x - (2*y)/sum);
    double num12 = num1 / num2;
    double num123 = num12 * pow(x, fabs(y));
    double arc = 1.0 / z;
    double num4 = exp(1) * pow(cos(atan(arc)), 2);
    double num1234 = num123 + num4;

   printf("Результат: %.6f", num1234);
 return 0;
}
