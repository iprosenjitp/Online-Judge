#include <iostream>
using namespace std;
int main()
{
    while(1){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) break;
        int c = 2*a - b;
        printf("%d\n", c);
    }
    return 0;
}

