#include <iostream>

using namespace std;

int main()
{
    string str1, str2, str3;

    getline(cin, str1);
    getline(cin, str2);
    getline(cin, str3);

    cout << str1 << str2 << str3 <<endl;
    cout << str2 << str3 << str1 <<endl;
    cout << str3 << str1 << str2 <<endl;

    for(int i = 0; i < 10 && str1[i] != '\0'; i++) printf("%c", str1[i]);
    for(int i = 0; i < 10 && str2[i] != '\0'; i++) printf("%c", str2[i]);
    for(int i = 0; i < 10 && str3[i] != '\0'; i++) printf("%c", str3[i]);
    printf("\n");

    return 0;
}

