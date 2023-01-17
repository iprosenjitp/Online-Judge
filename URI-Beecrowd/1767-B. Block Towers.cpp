#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int A[200005];
        int sum = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &A[i]);
            sum += A[i];
        }
        int x = sum/n;
        printf("first x = %d\n", x);
        for(int i = 0; i < n; i++){
            if(x < A[i]){
                int temp = A[i] - x;
//                if(temp%2) x += (temp-x)/2;
//                else x += (temp-x)/2+1;
//                x = (x + A[i])/2 - x;
                x += (temp-x)/2+1;
                printf("%d\n", x);
            }
        }
        printf("%d\n", x);
    }

    return 0;
}

