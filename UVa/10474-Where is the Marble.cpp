#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int A[10004];
    int t = 1;
    while(1) {
        int n, q, qi;
        scanf("%d %d", &n, &q);
        if(n == 0 || q == 0) break;
        for(int i = 0; i < n; i++) scanf("%d", &A[i]);
        sort(A, A+n);
        printf("CASE# %d:\n", t++);
        for(int i = 0; i < q; i++) {
            scanf("%d", &qi);
            int ans = lower_bound(A, A+n, qi) - A;
            if(A[ans] == qi) printf("%d found at %d\n", qi, ans+1);
            else printf("%d not found\n", qi);
        }
    }
    return 0;
}

