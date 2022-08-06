#include<iostream>
using namespace std;
int main()
{
    int x, count = 0;
    scanf("%d", &x);
    while(count < 12){
        if(x % 2 == 1){
            printf("%d\n", x);
        }
        x++;
        count++;
    }
    return 0;
}
