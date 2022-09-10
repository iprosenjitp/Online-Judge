#include <iostream>

using namespace std;

int main()
{
    int n;
    int ara[102];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    int lowest = ara[0];
    int index = 0;
    for(int i = 1; i < n; i++){
        if(ara[i] < lowest){
            index = i;
            lowest = ara[i];
        }
    }
    printf("%d\n", ++index);

    return 0;
}

