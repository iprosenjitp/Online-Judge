#include <iostream>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        if(i > 0) printf("that ");
        if(i%2 == 0) printf("I hate ");
        else printf("I love ");
    }

    printf("it\n");

    return 0;
}

