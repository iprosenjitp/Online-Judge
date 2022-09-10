#include <iostream>

using namespace std;

int main()
{
    int p, pi, q;
    double sum = 0.0;

    double products[1006];
    products[1001] = 1.50;
    products[1002] = 2.50;
    products[1003] = 3.50;
    products[1004] = 4.50;
    products[1005] = 5.50;

    scanf("%d", &p);

    for(int i = 0; i < p; i++){
        scanf("%d %d", &pi, &q);
        sum += products[pi] * q;
    }

    printf("%0.2lf\n", sum);

    return 0;
}
