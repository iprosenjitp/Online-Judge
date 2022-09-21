#include <iostream>

using namespace std;

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    int time = 240 - k;
    int cnt = 0;
    int timeSum = 0;

    for(int i = 1; i <= n; i++){
        timeSum += 5*i;
        if(timeSum > time) break;
        cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}

