#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int x, y;

    scanf("%d %d", &a, &b);

    if(a >= b) x = a;
    else x = b;

    y = (a+b) - x;

    printf("%d %d\n", y, (x-y)/2);

    return 0;
}

