#include <iostream>

using namespace std;

int main()
{

    while(1){
        int n;
        scanf("%d", &n);

        if(n == 0) break;

        int ni[51];
        for(int i = 0; i < n; i++){
            scanf("%d", &ni[i]);
        }
        int k;
        scanf("%d", &k);

        for(int i = 0; i < n; i++){
            if(k == ni[i]){
                printf("%d\n", k);
            }
            else{
                k = ni[i];
            }
        }
    }
    return 0;
}

