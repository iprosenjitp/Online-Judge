#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double a, b, c, sr, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);

    sr = (b*b) - (4*a*c);

    if(a == 0 || sr < 0){
        printf("Impossivel calcular\n");
    }
    else{
        r1 = (- b + sqrt(sr)) / (2*a);
        r2 = (- b - sqrt(sr)) / (2*a);

        printf("R1 = %0.5lf\nR2 = %0.5lf\n", r1, r2);
    }
    return 0;
}
