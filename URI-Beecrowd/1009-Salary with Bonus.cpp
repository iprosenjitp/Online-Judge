#include<iostream>
using namespace std;
int main()
{
    char name;
    double salary, sell, total;
    scanf("%s", &name);
    scanf("%lf %lf", &salary, &sell);

    total = salary + sell*0.15;

    printf("TOTAL = R$ %0.2lf\n", total);

    return 0;
}
