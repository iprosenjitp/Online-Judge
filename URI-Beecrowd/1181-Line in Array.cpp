#include<iostream>
using namespace std;

int main()
{
    int l;
    char t, temp;
    double m[12][12], sum = 0.0;
    scanf("%d", &l);
    scanf("%c", &temp);
    scanf("%c", &t);

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }

    for(int i = 0; i < 12; i++){
        sum += m[l][i];
    }

    if(t == 'S'){
        printf("%0.1lf\n", sum);
    }
    else{
        printf("%0.1lf\n", sum/12);
    }

    return 0;
}

