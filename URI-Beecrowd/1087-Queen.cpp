#include <iostream>

using namespace std;

int difference(int a, int b)
{
    if(a > b) return a-b;
    return b-a;
}

int main()
{
    int x1, x2, y1, y2;

    while(1){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        if(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0) break;

        if(x1 == x2 && y1 == y2) printf("0\n");
        else if(difference(x1, x2) == difference(y1, y2) || x1 == x2 || y1 == y2) printf("1\n");
        else printf("2\n");
    }

    return 0;
}

