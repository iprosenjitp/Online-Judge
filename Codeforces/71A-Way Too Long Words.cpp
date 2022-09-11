#include <iostream>

using namespace std;

int stringLength(char str[])
{
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }
    return len;
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        char str[102];
        scanf("%s", &str);
        int len = stringLength(str);
//        printf("%d\n", len);
        if(len <= 10) printf("%s\n", str);
        else{
            printf("%c%d%c\n", str[0], len-2, str[len-1]);
        }
    }

    return 0;
}

