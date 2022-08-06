#include<iostream>
using namespace std;
int main()
{
    int n, even[5], odd[5], e = 0, o = 0;
    double t;

    for(int i = 0; i < 15; i++){
        scanf("%d", &n);
        if(n%2 == 0){
            even[e] = n;
            e++;
            if(e == 5){
                for(int i = 0; i < 5; i++){
                    printf("par[%d] = %d\n", i, even[i]);
                    even[i] = 0;
                }
                e = 0;
            }
        }

        else{
            odd[o] = n;
            o++;
            if(o == 5){
                for(int i = 0; i < 5; i++){
                    printf("impar[%d] = %d\n", i, odd[i]);
                    odd[i] = 0;
                }
                o = 0;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        if(odd[i] == 0){
            break;
        }
        printf("impar[%d] = %d\n", i, odd[i]);
    }

    for(int i = 0; i < 5; i++){
        if(even[i] == 0){
            break;
        }
        printf("par[%d] = %d\n", i, even[i]);
    }

    return 0;
}


