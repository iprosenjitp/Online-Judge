#include<stdio.h>
int main()
{
    double n, sum = 0, avg;
    int positive = 0;

    for(int i = 1; i <= 6; i++){
        scanf("%lf", &n);

        if(n > 0.0){
            positive += 1;
            sum += n;
        }
    }

    avg = sum / positive;

    printf("%d valores positivos\n%0.1lf\n", positive, avg);
    return 0;
}

