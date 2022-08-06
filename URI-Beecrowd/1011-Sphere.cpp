#include<iostream>

using namespace std;

int main()
{
    double r, pi = 3.14159, vol;
    scanf("%lf", &r);
    vol = (4/3.0) * pi * (r * r * r);

    printf("VOLUME = %0.3lf\n", vol);
    return 0;
}
