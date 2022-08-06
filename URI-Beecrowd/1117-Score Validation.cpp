#include<iostream>
using namespace std;
int main()
{
    double n, sum = 0.00, avg;
    int count = 0;
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
                break;
            }
        }
    }

    return 0;
}
