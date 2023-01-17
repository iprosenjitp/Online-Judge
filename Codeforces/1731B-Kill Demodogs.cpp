#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        int ans = 1;
        scanf("%d", &n);
        for(int i = 1, j = 1, flag = 0; ; ){
            if(flag) j++;
            else i++;
            ans += i*j;
            flag = 1-flag;
//            printf("%d %d %d\n", i, j, ans);
            if(i == n && j == n) break;
        }
        printf("%d\n", ans*2022);
    }

    return 0;
}

