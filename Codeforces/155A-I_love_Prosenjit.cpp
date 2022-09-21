#include <iostream>

using namespace std;

int main()
{
    int n;
    int A[1003];
    int cnt = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) scanf("%d", &A[i]);

    int best = A[0];
    int worst = A[0];

    for(int i = 1; i < n; i++){
        if(A[i] > best){
            cnt++;
            best = A[i];
        }

        if(A[i] < worst){
            cnt++;
            worst = A[i];
        }
    }

    printf("%d\n", cnt);

    return 0;
}

