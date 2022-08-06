#include<iostream>
using namespace std;
int main()
{
    int x, y, sum = 0;
    scanf("%d %d", &x, &y);
    for(int i = (y+1); i < x; i++){
        if(i % 2 == 1 || i % 2 == -1){
            sum += i;
        }
    }

    printf("%d\n", sum);
    return 0;
}
