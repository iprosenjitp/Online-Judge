#include<iostream>
using namespace std;
int main()
{
    int x;
    double y, consumption;
    scanf("%d %lf", &x, &y);

    consumption = x / y;

    printf("%0.3lf km/l\n", consumption);
    return 0;
}
