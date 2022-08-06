#include<iostream>
using namespace std;
int main()
{
    int n, even = 0;

    for(int i = 1; i <= 5; i++){
        scanf("%d", &n);

        if(!(n % 2 == 1 || n % 2 == -1)){
            even += 1;
        }
    }

    printf("%d valores pares\n", even);
    return 0;
}

