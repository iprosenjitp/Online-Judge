#include <iostream>

using namespace std;

int main()
{
    int bills[] = {2, 5, 10, 20, 50, 100};
    int n, m;
    while(1){
        int flag = 0;
        scanf("%d %d", &n, &m);
        if(n == 0 && m == 0) break;

        int sub = m - n;
        for(int i = 0; i < 6; i++){
            for(int j = i+1; (bills[i]+bills[j])<=sub && j < 6; j++){
                if(bills[i] + bills[j] == sub){
                    flag = 1;
                    break;
                }
            }
        }

        if(flag) printf("possible\n");
        else printf("impossible\n");
    }

    return 0;
}

