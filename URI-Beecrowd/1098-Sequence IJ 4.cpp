#include<iostream>
using namespace std;

int main()
{
    int a, b;

    for(float i = 0.0; i < 2.1; i += 0.2){
        for(float j = 1.0; j <= 3.0; j++){
            if(i>0 && i<1 || i>1 && i<2){
                printf("I=%0.1f J=%0.1f\n", i, i+j);
            }

            else{
                a = i;
                b = i+j;
                printf("I=%d J=%d\n", a, b);
            }
        }
    }

    return 0;
}

