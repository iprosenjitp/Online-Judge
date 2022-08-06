#include<iostream>
using namespace std;
int main()
{
    int n, a, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &a);
        for(int j = 1; j < a; j++){
            if(a%j == 0){
                sum += j;
            }
        }
        if(sum == a){
            printf("%d eh perfeito\n", a);
        }
        else{
            printf("%d nao eh perfeito\n", a);
        }
        sum = 0;
    }
    return 0;
}
