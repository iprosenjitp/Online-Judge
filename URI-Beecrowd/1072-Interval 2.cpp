#include<iostream>
using namespace std;
int main()
{
    int n, x, in = 0, out = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &x);
        if(x >= 10 && x <= 20){
            in += 1;
        }
        else{
            out += 1;
        }
    }

    printf("%d in\n%d out\n", in, out);
    return 0;
}
