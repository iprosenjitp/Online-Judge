#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n;
    char S[51], ch;
    int cnt = 0;

    scanf("%d", &n);

    while(n--){
        scanf("%s", S);
        scanf("%c", &ch);

        if(!(strcmp(S, "Tetrahedron"))) cnt += 4;
        else if(!(strcmp(S, "Cube"))) cnt += 6;
        else if(!(strcmp(S, "Octahedron"))) cnt += 8;
        else if(!(strcmp(S, "Dodecahedron"))) cnt += 12;
        else cnt += 20;
    }

    printf("%d\n", cnt);

    return 0;
}

