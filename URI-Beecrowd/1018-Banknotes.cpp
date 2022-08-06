#include<stdio.h>
int main()
{
    int amount;
    int note100, note50, note20, note10, note5, note2, note1;

    scanf("%d", &amount);

    if(amount > 0 && amount < 1000000){
        printf("%d\n", amount);

        note100 = amount / 100;
        amount = amount - (note100 * 100);

        note50 = amount / 50;
        amount = amount - (note50 * 50);

        note20 = amount / 20;
        amount = amount - (note20 * 20);

        note10 = amount / 10;
        amount = amount - (note10 * 10);

        note5 = amount / 5;
        amount = amount - (note5 * 5);

        note2 = amount / 2;
        amount = amount - (note2 * 2);

        note1 = amount / 1;
        amount = amount - (note1 * 1);

    }


    printf("%d nota(s) de R$ 100,00\n", note100);
    printf("%d nota(s) de R$ 50,00\n", note50);
    printf("%d nota(s) de R$ 20,00\n", note20);
    printf("%d nota(s) de R$ 10,00\n", note10);
    printf("%d nota(s) de R$ 5,00\n", note5);
    printf("%d nota(s) de R$ 2,00\n", note2);
    printf("%d nota(s) de R$ 1,00\n", note1);


    return 0;
}

