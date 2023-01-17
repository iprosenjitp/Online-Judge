#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int cnt = 0;
    scanf("%d %d", &n, &m);
    while(n && m){
        cnt++;
        n--;
        m--;
    }
    cnt%2 == 0 ? printf("Malvika\n") : printf("Akshat\n");
    return 0;
}

