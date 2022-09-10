#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++){
        int n, res;
        scanf("%d", &n);
        int nj;
        for(int j = 0; j < n; j++){
            scanf("%d", &nj);
            if(j == n/2) res = nj;
        }

        printf("Case %d: %d\n", i, res);
    }

    return 0;
}

