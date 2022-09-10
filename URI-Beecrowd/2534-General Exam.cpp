#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, q, ni[102], qi;
    scanf("%d %d", &n, &q);

    for(int i = 0; i < n; i++){
        scanf("%d", &ni[i]);
    }

    sort(ni, ni+n);
    int len = n-1;

    for(int i = 0; i < n/2; i++){
        int temp = ni[i];
        ni[i] = ni[len];
        ni[len] = temp;
        len--;
    }

    for(int i = 0; i < q; i++){
        scanf("%d", &qi);
        printf("%d\n", ni[qi-1]);
    }

    return 0;
}

