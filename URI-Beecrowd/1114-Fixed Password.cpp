#include<iostream>
using namespace std;
int main()
{
    int cp = 2002, pw;
    while(1){
        scanf("%d", &pw);
        if(pw == cp){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
