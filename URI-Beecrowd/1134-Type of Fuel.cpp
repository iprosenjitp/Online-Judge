#include<iostream>
using namespace std;
int main()
{
    int n, alc = 0, gas = 0, die = 0;
    while(1){
        scanf("%d", &n);
        if(n == 1){
            alc++;
        }
        else if(n == 2){
            gas++;
        }
        else if(n == 3){
            die++;
        }
        else if(n == 4){
            printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, die);
            break;
        }
    }
    return 0;
}
