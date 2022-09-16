#include <iostream>

using namespace std;

int main()
{
    char str[1003];
    scanf("%s", str);

    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] = 'A' + (str[0] - 'a');
    }
    printf("%s\n", str);

    return 0;
}

