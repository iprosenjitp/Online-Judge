#include <iostream>

using namespace std;

int main()
{
    int l, c;
    scanf("%d %d", &l, &c);

    int a = (l*c) + (l-1) * (c-1);
    int b = (c-1) * 2 + (l-1) * 2;

    printf("%d\n%d\n", a, b);

    return 0;
}

