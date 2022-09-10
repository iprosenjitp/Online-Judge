#include <iostream>

using namespace std;

int main()
{
    int A[10004];
    int t;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int n, cnt = 0;
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%d", &A[j]);
        }

        for(int j = 0; j < n; j++){
            if(A[j] == -1) continue;
            for(int k = j+1; k < n; k++){
                if(A[j] == A[k]){
                    cnt++;
                    A[k] = -1;
                }
            }
        }

        printf("%d\n", n-cnt);
    }

    return 0;
}

