#include <iostream>

using namespace std;

int main()
{
    int xxx, yyy, zzz, dd;
    char c;
    scanf("%d %c %d %c %d %c %d", &xxx, &c, &yyy, &c, &zzz, &c, &dd);

    if(xxx < 100){
        if(xxx < 10) printf("00%d\n", xxx);
        else printf("0%d\n", xxx);
    }
    else printf("%d\n", xxx);

    if(yyy < 100){
        if(yyy < 10) printf("00%d\n", yyy);
        else printf("0%d\n", yyy);
    }
    else printf("%d\n", yyy);

    if(zzz < 100){
        if(zzz < 10) printf("00%d\n", zzz);
        else printf("0%d\n", zzz);
    }
    else printf("%d\n", zzz);

    dd < 10? printf("0%d\n", dd) : printf("%d\n", dd);

    return 0;
}

