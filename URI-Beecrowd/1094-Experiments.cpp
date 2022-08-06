#include<iostream>
using namespace std;

int main()
{
    int n, amount, rabbit = 0, rat = 0, frog = 0, total;
    char ani;
    double per_rabbit, per_rat, per_frog;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %c", &amount, &ani);
        if(amount >= 1 && amount <= 15){
            if(ani == 'C'){
                rabbit += amount;
            }

            else if(ani == 'R'){
                rat += amount;
            }

            else{
                frog += amount;
            }
        }
    }

    total = rabbit + rat + frog;

    per_rabbit = (rabbit / (total * 1.0))*100.0;
    per_rat = (rat / (total * 1.0))*100.0;
    per_frog = (frog / (total * 1.0))*100.0;

    printf("Total: %d cobaias\n", total);

    printf("Total de coelhos: %d\n", rabbit);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);

    printf("Percentual de coelhos: %0.2lf %\n", per_rabbit);
    printf("Percentual de ratos: %0.2lf %\n", per_rat);
    printf("Percentual de sapos: %0.2lf %\n", per_frog);

    return 0;
}
