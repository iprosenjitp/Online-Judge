#include<iostream>
using namespace std;
int main()
{
    int x, y, a, b;
    scanf("%d %d", &x, &y);
    a = max(x, y);
    b = min(x, y);
    for(int i = b+1; i < a; i++){
        if(i%5 == 2 || i%5 == 3){
            printf("%d\n", i);
        }
    }
    return 0;
}
