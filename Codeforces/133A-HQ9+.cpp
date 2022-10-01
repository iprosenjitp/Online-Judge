#include <iostream>

using namespace std;

int main()
{
    char p[102];

    scanf("%s", p);

    for(int i = 0; p[i] != '\0'; i++){
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}

