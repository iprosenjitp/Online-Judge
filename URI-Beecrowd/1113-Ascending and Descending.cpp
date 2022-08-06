#include<iostream>
using namespace std;
int main()
{
    int a, b;
    while(1){
        scanf("%d %d", &a, &b);

        if(a == b){
            break;
        }

        if(a > b){
            printf("Decrescente\n");
        }
        else{
            printf("Crescente\n");
        }
    }
    return 0;
}
