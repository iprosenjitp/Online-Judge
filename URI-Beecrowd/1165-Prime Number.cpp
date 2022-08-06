#include<iostream>
using namespace std;
int main()
{
    int n, a, count = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &a);
        for(int j = 2; j < a; j++){
            if(a%j == 0){
                count++;
            }
        }
        if(count > 0){
            printf("%d nao eh primo\n", a);
        }
        else{
            printf("%d eh primo\n", a);
        }
        count = 0;
    }
    return 0;
}

