#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i < 39; i++) printf("-");
    printf("\n");
    for(int j = 0; j < 5; j++){
        for(int i = 0; i < 39; i++){
            if(i==0 || i==38) printf("|");
            else printf (" ");
        }
        printf("\n");
    }
    for(int i = 0; i < 39; i++) printf("-");
    printf("\n");
    return 0;
}

