#include <iostream>

using namespace std;

int A[20004];

int main()
{
    while(1){
        int n, m, mi;
        scanf("%d %d", &n, &m);
        if(n == 0 && m == 0) break;

        for(int i = 0; i <= n; i++) A[i] = 0;

        for(int i = 0; i < m; i++){
            scanf("%d", &mi);
            A[mi]++;
        }

        int cnt = 0;

//        for(int i = 1; i <= n; i++) printf("%d ", A[i]);
//        printf("\n");

        for(int i = 1; i <= n; i++){
            if(A[i] > 1){
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}

