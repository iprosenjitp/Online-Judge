#include<iostream>
using namespace std;
int main()
{
    int n, a, b;
    double div;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);
        if(b == 0){
            printf("divisao impossivel\n");
        }
        else{
            div = (1.0*a) / (1.0*b);
            printf("%0.1lf\n", div);
        }

    }
    return 0;
}
