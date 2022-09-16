#include <iostream>

using namespace std;


int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    while(k){
        if(n%10) n -= 1;
        else n /= 10;
        k--;
    }

    printf("%d\n", n);

    return 0;
}

