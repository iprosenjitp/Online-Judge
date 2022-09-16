#include <iostream>

using namespace std;

int main()
{
    int n, ni;
    int A[102];

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &ni);
        A[ni] = i;
    }

    for(int i = 1; i <= n; i++) printf("%d ", A[i]);
    printf("\n");

    return 0;
}

