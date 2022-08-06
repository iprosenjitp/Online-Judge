#include<iostream>
using namespace std;

int main()
{
    int n;
    double a, b, c, wa, arr[5];
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%lf %lf %lf", &a, &b, &c);

        wa = (a*2 + b*3 + c*5) / 10;

        arr[i] = wa;

//        printf("%0.1lf\n", wa);
    }

    for(int i = 1; i <= n; i++){
        printf("%0.1lf\n", arr[i]);
    }

    return 0;
}
