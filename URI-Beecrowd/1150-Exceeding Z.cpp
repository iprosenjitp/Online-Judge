#include<iostream>
using namespace std;
int main()
{
    int x, z, count = 0, sum = 0;
    scanf("%d", &x);
    while(1){
        scanf("%d", &z);
        if(z > x){
            break;
        }
    }

    for(int i = x; sum < z; i++){
        sum += i;
        count++;
    }
    printf("%d\n", count);

    return 0;
}

