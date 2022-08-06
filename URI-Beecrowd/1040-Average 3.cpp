#include<iostream>
using namespace std;

int main()
{
    double n1, n2, n3, n4, avg, m, avg2;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    avg = (2*n1 + 3*n2 + 4*n3 + 1*n4) / (2+3+4+1);
    printf("Media: %0.1lf\n", avg);

    if(avg >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg < 5.0){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");

        scanf("%lf", &m);
        printf("Nota do exame: %0.1lf\n", m);

        avg2 = (avg + m) / 2;

        if(avg2 >= 5.0){
            printf("Aluno aprovado.\n");
        }

        else if(avg2 <= 4.9){
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %0.1lf\n", avg2);
    }

    return 0;
}
