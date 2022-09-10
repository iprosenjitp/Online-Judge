#include <iostream>

using namespace std;

int ara[2003];

int main()
{
    int t, x;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &x);
        ara[x]++;
    }
    for(int i = 0; i <= 2000; i++){
        if(ara[i] == 0) continue;
        printf("%d aparece %d vez(es)\n", i, ara[i]);
    }

    return 0;
}

