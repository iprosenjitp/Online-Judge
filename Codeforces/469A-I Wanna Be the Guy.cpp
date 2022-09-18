#include <iostream>

using namespace std;

int main()
{
    int n, p, pi, q, qi;
    int A[102];

    for(int i = 0; i < 101; i++) A[i] = 0;

    scanf("%d", &n);

    scanf("%d", &p);
    for(int i = 0; i < p; i++){
        scanf("%d", &pi);
        A[pi]++;
    }

    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        scanf("%d", &qi);
        A[qi]++;
    }

    for(int i = 1; i <= n; i++){
        if(!A[i]){
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }

    printf("I become the guy.\n");

    return 0;
}

