#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    int A[51];
    int s = 1000;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < m; i++){
        scanf("%d", &A[i]);
    }

    sort(A, A+m);

    for(int i = 0; i < m-n+1; i++){
        if(s > (A[i+n-1] - A[i])) s = (A[i+n-1] - A[i]);
    }

    printf("%d\n", s);

    return 0;
}

