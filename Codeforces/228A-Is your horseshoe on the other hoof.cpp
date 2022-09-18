#include <iostream>

using namespace std;

int main()
{
    int A[10];
    int cnt = 0;

    for(int i = 0; i < 4; i++) scanf("%d", &A[i]);

//    int p = A[0];

    for(int i = 0; i < 4; i++){
        if(A[i] != -1){
            for(int j = i+1; j < 4; j++){
                if(A[i] == A[j]){
                    cnt++;
                    A[j] = -1;
                }
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}
