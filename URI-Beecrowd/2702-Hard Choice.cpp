#include <iostream>

using namespace std;

int main()
{
    int A[5], B[5], cnt = 0;

    for(int i = 0; i < 3; i++) scanf("%d", &A[i]);
    for(int i = 0; i < 3; i++) scanf("%d", &B[i]);

    for(int i = 0; i < 3; i++) {
        if(A[i] < B[i]){
            cnt += (B[i] - A[i]);
        }
    }
    printf("%d\n", cnt);

    return 0;
}

