#include<iostream>
using namespace std;
int main()
{
    int a, b, min, max;
    scanf("%d %d", &a, &b);
    if (a < b){
        min = a;
        max = b;
    }
    else{
        min = b;
        max = a;
    }

    if(max % min == 0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
