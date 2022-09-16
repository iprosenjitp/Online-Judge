#include <iostream>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int cnt = 0;
    while(a <= b){
        a *= 3;
        b *= 2;

        cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}

