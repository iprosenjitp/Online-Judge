#include <iostream>

using namespace std;

int main()
{
    int t, x = 0;
    char str[5];

    scanf("%d", &t);

    while(t--){
        scanf("%s", str);
        if(str[1] == '+') x++;
        else x--;
    }

    printf("%d\n", x);

    return 0;
}

