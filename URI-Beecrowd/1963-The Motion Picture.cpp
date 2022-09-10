#include <iostream>

using namespace std;

int main()
{
    double a, b;

    scanf("%lf %lf", &a, &b);

    double dif = b - a;
    double ans = (dif/a)*100;
    printf("%0.2lf%\n", ans);

    return 0;
}

