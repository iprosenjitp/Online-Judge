#include <iostream>
//#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }

    len > 80 ? printf("NO\n") : printf("YES\n");

    return 0;
}

