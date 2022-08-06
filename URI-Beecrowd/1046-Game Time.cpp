#include<iostream>
using namespace std;

int main()
{
    int a, b, duration, hr;
    scanf("%d %d", &a, &b);

    duration = b - a;

    if (a == b){
        duration = 24;
    }

    else if(a > b){
        duration = duration + 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}

