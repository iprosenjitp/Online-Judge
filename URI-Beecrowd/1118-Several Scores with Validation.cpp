#include<iostream>
using namespace std;
int main()
{
    double n, sum = 0.00, avg;
    int count = 0, x;
    while(1){
        scanf("%lf", &n);
        if(n < 0.00 || n > 10.00){
            printf("nota invalida\n");
        }
        else{
            sum += n;
            count++;
            if(count == 2){
                avg = sum / 2.00;
                printf("media = %0.2lf\n", avg);

                while(1){
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &x);
                    if(x == 1 || x == 2){
                        break;
                    }
                }
                sum = 0.00;
                count = 0;
            }
        }

        if (x == 2){
            break;
        }
    }
    return 0;
}
