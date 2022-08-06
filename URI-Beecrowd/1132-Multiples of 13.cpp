#include<iostream>
using namespace std;
int main()
{
    int x, y, a, b,sum = 0;
    scanf("%d %d", &x, &y);

    if(x > y){
        a = y;
        b = x;
    }
    else{
        a = x;
        b = y;
    }

    for(int i = a; i <= b; i++){
        if(i%13 != 0){
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
