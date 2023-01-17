#include <iostream>

using namespace std;

int main()
{
    int n, mod1, mod2, div1, div2;
    scanf("%d", &n);
    if(n >= 0) printf("%d\n", n);
    else if(n > -100) {
        if(n/10 > n%10) printf("%d\n", n/10);
        else printf("%d\n", n%10);
    }
    else{
        mod1 = n%10;
        div1 = n/10;
        mod2 = div1%10;
        div2 = div1/10;
        if(mod1 <= mod2) printf("%d\n", div1);
        else printf("%d%d\n", div2, mod1-2*mod1);
    }

//    printf("%d %d\n", mod1, mod2);
//    printf("%d %d\n", div1, div2);
    return 0;
}

