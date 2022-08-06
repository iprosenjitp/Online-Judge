#include<stdio.h>
int main()
{
    double amount;
    int a, taka;

    scanf("%lf", &amount);

    a = amount*100;

    printf("NOTAS:\n");

    taka = a/10000;
    printf("%d nota(s) de R$ 100.00\n", taka);
    a = a%10000;

    taka = a/5000;
    printf("%d nota(s) de R$ 50.00\n", taka);
    a = a%5000;

    taka = a/2000;
    printf("%d nota(s) de R$ 20.00\n", taka);
    a = a%2000;

    taka = a/1000;
    printf("%d nota(s) de R$ 10.00\n", taka);
    a = a%1000;

    taka = a/500;
    printf("%d nota(s) de R$ 5.00\n", taka);
    a = a%500;

    taka = a/200;
    printf("%d nota(s) de R$ 2.00\n", taka);
    a = a%200;

    printf("MOEDAS:\n");

    taka = a/100;
    printf("%d moeda(s) de R$ 1.00\n", taka);
    a = a%100;

    taka = a/50;
    printf("%d moeda(s) de R$ 0.50\n", taka);
    a = a%50;

    taka = a/25;
    printf("%d moeda(s) de R$ 0.25\n", taka);
    a = a%25;

    taka = a/10;
    printf("%d moeda(s) de R$ 0.10\n", taka);
    a = a%10;

    taka = a/5;
    printf("%d moeda(s) de R$ 0.05\n", taka);
    a = a%5;

    printf("%d moeda(s) de R$ 0.01\n", a);

    return 0;
}




