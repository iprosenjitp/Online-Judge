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
    char str1[102], str2[102];
    int ans = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    int len = stringLength(str1);

    for(int i = 0; i < len; i++){
        if(str1[i] >= 'A' && str1[i] <= 'Z') str1[i] = 'a' + (str1[i] - 'A');
        if(str2[i] >= 'A' && str2[i] <= 'Z') str2[i] = 'a' + (str2[i] - 'A');

        if(str1[i] > str2[i]){
            ans = 1;
            break;
        }
        else if(str1[i] < str2[i]){
            ans = -1;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}

