#include<iostream>
using namespace std;
int main()
{
    int n, x[100005], small, position;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }

    small = x[0];
    position = 0;

    for(int i = 1; i < n; i++){
        if(small > x[i]){
            small = x[i];
            position = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", small, position);

    return 0;
}
