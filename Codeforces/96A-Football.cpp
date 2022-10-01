#include <iostream>

using namespace std;

int main()
{
    char str[102];
    int cnt0 = 0, cnt1 = 0;

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '0') {
            cnt0++;
            cnt1 = 0;
        }
        else{
            cnt1++;
            cnt0 = 0;
        }

        if(cnt0 >= 7 || cnt1 >= 7){
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}

