#include<iostream>
using namespace std;

int main()
{
    char t;
    double m[12][12], sum = 0.0, c = 0.0;
    scanf("%c", &t);

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }

    for(int i = 11; i > 0; i--){
        for(int j = 11; j > 11-i; j--){
            sum += m[j][i];
            c++;
        }
    }

    if(t == 'S'){
        printf("%0.1lf\n", sum);
    }
    else{
        printf("%0.1lf\n", sum/c);
    }

    return 0;
}





