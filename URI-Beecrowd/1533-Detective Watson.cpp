#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, A[1003], B[1003];

    while(1){
        scanf("%d", &n);
        if(n == 0) break;

        for(int i = 0; i < n; i++){
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        sort(A, A+n);
        int x = A[n-2];

        for(int i = 0; i < n; i++){
            if(B[i] == x){
                printf("%d\n", i+1);
            }
        }
    }

    return 0;
}

