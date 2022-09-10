#include <iostream>

using namespace std;

int main()
{
    int dd, mm, yy;
    char ch;
    scanf("%d %c %d %c %d", &dd, &ch, &mm, &ch, &yy);

    mm < 10? printf("0%d/", mm) : printf("%d/", mm);
    dd < 10? printf("0%d/", dd) : printf("%d/", dd);
    yy < 10? printf("0%d\n", yy) : printf("%d\n", yy);

    yy < 10? printf("0%d/", yy) : printf("%d/", yy);
    mm < 10? printf("0%d/", mm) : printf("%d/", mm);
    dd < 10? printf("0%d\n", dd) : printf("%d\n", dd);

    dd < 10? printf("0%d-", dd) : printf("%d-", dd);
    mm < 10? printf("0%d-", mm) : printf("%d-", mm);
    yy < 10? printf("0%d\n", yy) : printf("%d\n", yy);

    return 0;
}

