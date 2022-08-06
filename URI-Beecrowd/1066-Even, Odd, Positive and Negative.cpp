#include<iostream>
using namespace std;
int main()
{
    int n, positive = 0, negative = 0, even = 0, odd = 0;

    for(int i = 1; i <= 5; i++){
        scanf("%d", &n);
        if(n > 0){
            positive += 1;
        }
        else if(n < 0){
            negative += 1;
        }

        if(n % 2 == 1 || n % 2 == -1){
            odd += 1;
        }
        else{
            even += 1;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, negative);
    return 0;
}
