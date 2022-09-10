#include <iostream>

using namespace std;

int main()
{
    char str[50] = "AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n", str);
    printf("<%30s>\n", str);
    printf("<%.20s>\n", str);
    printf("<% -20s>\n", str);
    printf("<% -30s>\n", str);
    printf("<% .30s>\n", str);
    printf("<% 30.20s>\n", str);
    printf("<% -30.20s>\n", str);

    return 0;
}

