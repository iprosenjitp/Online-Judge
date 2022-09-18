#include <iostream>

using namespace std;

int largeIndex(int A[], int n)
{
    int x = A[0];
    int a = 0;
    for(int i = 1; i < n; i++){
        if(x < A[i]){
            x = A[i];
            a = i;
        }
    }
    return a;
}

int smallIndex(int A[], int n)
{
    int x = A[0];
    int b = 0;
    for(int i = 1; i < n; i++){
        if(x >= A[i]){
            x = A[i];
            b = i;
        }
    }
    return b;
}

int main()
{
    int n;
    int A[102];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    int a = largeIndex(A, n);
//    printf("%d\n", a);
    int b = smallIndex(A, n);
//    printf("%d\n", b);

    int ans = a + (n-b-1);
    if(a > b) ans--;

    printf("%d\n", ans);

    return 0;
}

