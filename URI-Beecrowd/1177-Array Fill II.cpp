#include<iostream>
using namespace std;
int main()
{
    int t, n[1000], a = 0;
    scanf("%d", &t);
    if(t >= 2 && t <= 50){
        for(int i = 0; i < 1000; i++){
            printf("N[%d] = %d\n", i, a);
            a++;
            if(a == t){
                a = 0;
            }
        }
    }
    return 0;
}
