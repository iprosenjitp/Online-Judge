#include <iostream>
using namespace std;
int main()
{
    int k;
    while(1) {
        scanf("%d", &k);
        if(k == 0) break;
        int n, m;
        scanf("%d %d", &n, &m);
        for(int i = 0; i < k; i++){
            int x, y;
            scanf("%d %d", &x, &y);
            if(x == n || y == m) printf("divisa\n");
            else{
                if(x > n){
                    if(y > m) printf("NE\n");
                    else printf("SE\n");
                }
                else{
                    if(y > m) printf("NO\n");
                    else printf("SO\n");
                }
            }
        }
    }
    return 0;
}

