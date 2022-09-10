#include <iostream>

using namespace std;

int main()
{
    int c, l;
    scanf("%d %d", &c, &l);

    if((c + l)%2 == 0) printf("1\n");
    else printf("0\n");

    return 0;
}
