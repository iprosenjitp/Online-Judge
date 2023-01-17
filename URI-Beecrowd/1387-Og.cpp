#include <iostream>
using namespace std;
int main()
{
    while(1){
        int l, r;
        scanf("%d %d", &l, &r);
        if(l == 0 && r == 0) break;
        printf("%d\n", l+r);
    }

    return 0;
}

