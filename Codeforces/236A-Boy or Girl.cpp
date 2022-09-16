#include <iostream>

using namespace std;

int main()
{
    int A[30];
    for(int i = 0; i < 30; i++) A[i] = 0;

    int cnt = 0;

    char str[102];
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A'&& str[i] <= 'Z'){
            str[i] = 'a' + (str[i] - 'A');
        }
        A[str[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(A[i]) cnt ++;
    }

    cnt%2 == 0 ? printf("CHAT WITH HER!\n") : printf("IGNORE HIM!\n");

    return 0;
}
