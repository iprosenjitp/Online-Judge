#include <iostream>
using namespace std;
int main()
{
    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        for(int j = 0; j < n; j++){
            int A[6];
            int cnt = 0, flag;
            for(int i = 0; i < 5; i++){
                scanf("%d", &A[i]);
                if(A[i] <= 127) {
                    cnt++;
                    flag = i;
                }
            }
            if(cnt != 1) printf("*\n");
            else {
                if(flag == 0) printf("A\n");
                else if(flag == 1) printf("B\n");
                else if(flag == 2) printf("C\n");
                else if(flag == 3) printf("D\n");
                else if(flag == 4) printf("E\n");
            }
        }
    }
    return 0;
}

