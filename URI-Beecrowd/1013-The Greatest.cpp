#include<iostream>
using namespace std;

int main()
{
    int a, b, c, max_ab, max_abc;
    scanf("%d %d %d", &a, &b, &c);

    max_ab = ((a+b)+ abs(a-b)) / 2;

    max_abc = ((max_ab+c)+ abs(max_ab-c)) / 2;

    printf("%d eh o maior\n", max_abc);

    return 0;
}
