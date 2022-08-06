#include<iostream>
using namespace std;

int main()
{
    int num, hr;
    double amounthr, salary;
    scanf("%d %d %lf", &num, &hr, &amounthr);
    salary = hr * amounthr;

    printf("NUMBER = %d\nSALARY = U$ %0.2lf\n", num, salary);
    return 0;
}
