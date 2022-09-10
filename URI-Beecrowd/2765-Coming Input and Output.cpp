#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    getline(cin, str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ','){
            printf("\n");
            i++;
        }
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

