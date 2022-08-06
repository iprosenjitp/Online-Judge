#include<iostream>
using namespace std;
int main()
{
    double a, b, c, media;
    scanf("%lf %lf %lf", &a, &b, &c);
    media = (2*a + 3*b + 5*c) / (2 + 3 + 5);
    printf("MEDIA = %0.1f\n", media);
    return 0;
}
