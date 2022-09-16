#include <iostream>

using namespace std;

int main()
{
    char N[20];
    int cnt = 0;

    scanf("%s", N);

    for(int i = 0; N[i] != '\0'; i++){
        if(N[i] == '4' || N[i] == '7'){
            cnt++;
        }
    }

    if(cnt == 4 || cnt == 7) printf("YES\n");
    else printf("NO\n");

    return 0;
}

