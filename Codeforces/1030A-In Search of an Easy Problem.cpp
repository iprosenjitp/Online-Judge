#include <iostream>

using namespace std;

int main()
{
    int n, ni;
    int sum = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &ni);
        sum += ni;
    }

    if(sum > 0) printf("HARD\n");
    else printf("EASY\n");

    return 0;
}

