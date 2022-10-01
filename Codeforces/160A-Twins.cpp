#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, A[102];
    int sum = 0;
    int add = 0, cnt = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
        sum += A[i];
    }

    sort(A, A+n);

    for(int i = n-1; i >= 0; i--){
        add += A[i];
        cnt++;

        if(add > sum/2){
            printf("%d\n", cnt);
            break;
        }
    }

    return 0;
}

