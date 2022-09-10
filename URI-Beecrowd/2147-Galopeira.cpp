#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    char ch, str[10004];
    double ans;

    scanf("%d", &t);
    scanf("%c", &ch);

    while(t--){
        int len = 0;
        scanf("%s", str);
        for(int i = 0; str[i] != '\0'; i++){
            len++;
        }
        ans = len/100.00;
        printf("%0.2lf\n", ans);
    }
    return 0;
}

