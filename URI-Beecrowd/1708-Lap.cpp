#include <iostream>

using namespace std;

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int a = x;
    int b = y;
    int cnt = 0;

    while(1){
        cnt++;
//        printf("%d %d %d\n", x, y, cnt);
        if(y - x >= b){
            printf("%d\n", cnt);
            break;
        }

        x += a;
        y += b;
    }

    return 0;
}

