#include<iostream>
using namespace std;
int main()
{
    int n[100];
    double t;
    scanf("%lf", &t);
    for(int i = 0; i < 100; i++){
        printf("N[%d] = %0.4lf\n", i, t);
        t = t/2;
    }
    return 0;
}

