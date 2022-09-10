#include <iostream>

using namespace std;

int main()
{
    int t, x;
    long long int sum = 0;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &x);
//        if(x%3 == 0) sum += x;
//        else if(x%3 == 1) sum += x-1;
//        else sum += x-2;
        sum += x-x%3;
    }

    printf("%lld\n", sum);

    return 0;
}

