#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int n, c, ni;
        int A[102];
        int ans = 0;

        for(int i = 1; i <= 100; i++) A[i] = 0;

        scanf("%d %d", &n, &c);
        for(int i = 0; i < n; i++){
            scanf("%d", &ni);
            A[ni]++;
        }

        for(int i = 1; i <= 100; i++){
            if(A[i] == 0) continue;
            else if(A[i] >= c){
                ans += c;
            }
            else ans += A[i];
        }
        printf("%d\n", ans);
    }

    return 0;
}

