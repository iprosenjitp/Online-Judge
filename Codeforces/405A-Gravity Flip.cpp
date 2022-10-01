#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, A[102];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &A[i]);
    sort(A, A+n);
    for(int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");
    return 0;
}

