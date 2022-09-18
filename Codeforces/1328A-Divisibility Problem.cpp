#include <iostream>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--){
        int a, b, ans;
        scanf("%d %d", &a, &b);

        if(a <= b) ans = b-a;
        else{
            if(a%b == 0) ans = 0;
            else ans = (((a/b) + 1) * b) - a;
        }

        printf("%d\n", ans);
    }

    return 0;
}

