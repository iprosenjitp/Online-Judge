#include <iostream>

using namespace std;

int main()
{
    int t;
    int A[102], B[102];


    scanf("%d", &t);

    while(t--){
        int n;
        int aOne = 0, bOne = 0;
        int flag = 0;
        int ans = 0;
        int cnt = 0;

        scanf("%d", &n);

        for(int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
            if(A[i] == 1) aOne++;
        }
        for(int i = 0; i < n; i++) {
            scanf("%d", &B[i]);
            if(B[i] == 1) bOne++;
        }

        for(int i = 0; i < n; i++){
            if(A[i] != B[i]){
                flag = 1;
                cnt++;
            }
        }

        if(flag){
            if(aOne == bOne) ans = 1;
            else{
                ans = min((abs(aOne-bOne) + 1), cnt);
            }
        }

//        printf("%d %d\n", (abs(aOne-bOne) + 1), cnt);
        printf("%d\n", ans);
    }

    return 0;
}

