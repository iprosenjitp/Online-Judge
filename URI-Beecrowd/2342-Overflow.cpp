#include <iostream>

using namespace std;

int main()
{
    int n, p, q, ans;
    char C;

    scanf("%d", &n);
    scanf("%d %c %d", &p, &C, &q);

    if(C == '+') ans = p + q;
    else ans = p * q;

    if(ans <= n) printf("OK\n");
    else printf("OVERFLOW\n");

    return 0;
}

