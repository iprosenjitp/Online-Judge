#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n, ans;
        scanf("%d", &n);
        for(int i = 2; i < 10e9 ; i++){
            int x = (pow(2, i) - 1);
            if(n%x == 0){
                ans = n / x;
                break;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}

