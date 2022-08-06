#include<iostream>
using namespace std;
int main()
{
    int a, b, x, inter = 0, gremio = 0, draw = 0;

    while(1){
        scanf("%d %d", &a, &b);
        if(a > b){
            inter++;
        }
        else if(a < b){
            gremio++;
        }
        else{
            draw++;
        }
        while(1){
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &x);
            if(x == 1 || x == 2){
                break;
            }
        }
        if(x == 2){
            printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", (inter + gremio + draw), inter, gremio, draw);
            if(inter > gremio){
                printf("Inter venceu mais\n");
            }
            else if(inter < gremio){
                printf("Gremio venceu mais\n");
            }
            else{
                printf("Não houve vencedor\n");
            }
            break;
        }
    }
    return 0;
}
