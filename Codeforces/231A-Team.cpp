#include <iostream>

using namespace std;

int main()
{
    int t;
    int a, b, c;
    int cnt = 0;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d", &a, &b, &c);
        int sum = a+b+c;
        if(sum >= 2) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}

