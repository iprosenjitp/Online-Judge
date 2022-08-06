#include<iostream>
using namespace std;

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %0.3lf\n", 0.5*a*c);
    printf("CIRCULO: %0.3lf\n", 3.14159*c*c);
    printf("TRAPEZIO: %0.3lf\n", ((a+b)/2)*c);
    printf("QUADRADO: %0.3lf\n", b*b);
    printf("RETANGULO: %0.3lf\n", a*b);

    return 0;
}
