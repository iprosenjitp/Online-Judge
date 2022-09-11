#include <iostream>

using namespace std;

int main()
{
    int n, k, item;
    int A[51];
    int cnt = 0;

    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
        if(i == k-1) item = A[i];
    }

    for(int i = 0; i < n; i++){
        if(A[i] >= item && A[i] != 0) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}

