#include<iostream>
using namespace std;
int main()
{
    double a, b, c, peri, area;
    scanf("%lf %lf %lf", &a, &b, &c);

    if((a+b) > c && (a+c) > b && (b+c) > a){
        peri = a + b +c;
        printf("Perimetro = %0.1lf\n", peri);
    }
    else{
        area = ((a+b)/2) * c;
        printf("Area = %0.1lf\n", area);
    }

    return 0;
}
