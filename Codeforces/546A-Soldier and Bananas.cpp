#include <iostream>

using namespace std;

int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int sum = 0;
    for(int i = 1; i <= w; i++){
        sum += k*i;
    }

    (sum-n) >= 0 ? printf("%d\n", sum-n) : printf("0\n");

    return 0;
}

