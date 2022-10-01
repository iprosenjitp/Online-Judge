#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int start = 0;
    int len = 0;
    int ans = 0;

    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);

        if(start <= x) len++;
        else len = 1;

        if(ans <= len) ans = len;

        start = x;
    }
	printf("%d\n", ans);
}
