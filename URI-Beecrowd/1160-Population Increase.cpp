#include<iostream>
using namespace std;
int main()
{
    int t, pa, pb;
    double g1, g2;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int year = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        while(pa <= pb){
            pa += (pa*g1) / 100;
            pb += (pb*g2) / 100;

//            pa += (pa/100) * g1;
//            pb += (pb/100) * g2;

            year++;
            if(year > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if(year <= 100){
            printf("%d anos.\n", year);
        }
    }
    return 0;
}
