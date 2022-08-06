#include<iostream>
using namespace std;
int main()
{
    double a, b, media;
    scanf("%lf %lf", &a, &b);

    media = (3.5 * a + 7.5 * b) / (3.5 + 7.5);

    printf("MEDIA = %0.5lf\n", media);
    return 0;
}
