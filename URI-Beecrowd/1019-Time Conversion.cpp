#include<iostream>
using namespace std;
int main()
{
    int n, hr, min, sec;
    scanf("%d", &n);

    hr = n / 3600;
    n = n - (hr * 3600);

    min = n / 60;
    n = n - (min * 60);

    sec = n;

    printf("%d:%d:%d\n", hr, min, sec);
    return 0;
}
