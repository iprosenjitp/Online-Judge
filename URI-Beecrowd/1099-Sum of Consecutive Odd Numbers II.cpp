#include<iostream>
using namespace std;
int main()
{
    int n, a, b, x, y, sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){

        scanf("%d %d", &x, &y);

        a = max(x, y);
        b = min(x, y);

        if(a == b || a == (b+1)){
            printf("%d\n", sum);
        }

        else{
            for(int j = b+1; j < a; j++){
                if(j%2 != 0){
                    sum += j;
                }
            }
            printf("%d\n", sum);
        }
        sum = 0;
    }
    return 0;
}
