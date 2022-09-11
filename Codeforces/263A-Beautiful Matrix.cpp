#include <iostream>

using namespace std;

int absoluteDifference(int a, int b)
{
    if(a > b) return a-b;
    else return b-a;
}

int main()
{
    int x, y, n;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &n);
            if(n == 1){
                x = i;
                y = j;
            }
        }
    }

    int ans = absoluteDifference(2, x) + absoluteDifference(2, y);
    printf("%d\n", ans);

    return 0;
}
