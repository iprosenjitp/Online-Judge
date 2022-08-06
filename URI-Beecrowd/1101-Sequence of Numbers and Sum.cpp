#include<iostream>
using namespace std;
int main()
{
    int m, n, a, b, sum = 0;

    while(1) {
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0){
            break;
        }
        a = max(m, n);
        b = min(m, n);

        for (int i = b; i <= a; i++){
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
        sum = 0;
    }

    return 0;
}
