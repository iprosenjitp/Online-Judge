#include<iostream>
using namespace std;

int main()
{
    int a, b, x, y;
    int st, et, duration;
    int hr;
    scanf("%d %d %d %d", &a, &b, &x, &y);

    st = a*60 + b;
    et = x*60 + y;
    duration = et - st;

    if (st == et){
        duration = 0;
        hr = 24;
    }

    else if(st > et){
        duration = duration + 1440;
        hr = duration / 60;
        duration = duration%60;
    }

    else{
        hr = duration / 60;
        duration = duration%60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, duration);

    return 0;
}
