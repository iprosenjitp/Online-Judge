#include <iostream>

using namespace std;

int main()
{
    int n, l;
    int c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &l);

        if(l % 2 == 0) c2++;
        if(l % 3 == 0) c3++;
        if(l % 4 == 0) c4++;
        if(l % 5 == 0) c5++;
    }

    printf("%d Multiplo(s) de 2\n", c2);
    printf("%d Multiplo(s) de 3\n", c3);
    printf("%d Multiplo(s) de 4\n", c4);
    printf("%d Multiplo(s) de 5\n", c5);

    return 0;
}
