#include <iostream>

using namespace std;

int main()
{
    int y;
    scanf("%d", &y);

    int A[10];

    for(int i = y+1; ; i++){
        int flag = 1;
        for(int j = 0; j < 10; j++) A[j] = 0;
        int n = i;

        while(n/10 != 0){
            int x = n%10;
            A[x]++;
            n /= 10;
        }
        A[n]++;

        for(int j = 0; j < 10; j++){
            if(A[j] > 1){
                flag = 0;
                break;
            }
        }

        if(flag == 1) {
            printf("%d\n", i);
            break;
        }
    }


    return 0;
}

