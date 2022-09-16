#include <iostream>

using namespace std;

int main()
{
    int n;
    int cnt = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int p, q;
        scanf("%d %d", &p, &q);
        if(q-p >= 2) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}

