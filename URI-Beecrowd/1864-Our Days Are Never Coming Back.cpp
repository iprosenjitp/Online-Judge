#include <iostream>

using namespace std;

int main()
{
    char str[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

