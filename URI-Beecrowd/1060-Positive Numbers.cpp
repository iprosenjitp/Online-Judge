#include<iostream>
using namespace std;
int main()
{
    double n;
    int count = 0;
    for(int i = 1; i <= 6; i++){
        scanf("%lf", &n);
        if(n > 0.0){
            count++;
        }
    }

    printf("%d valores positivos\n", count);
    return 0;
}
