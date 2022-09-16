#include <iostream>

using namespace std;

int main()
{
    int n, t;
    char Q[51];

    scanf("%d %d", &n, &t);
    scanf("%s", Q);

    while(t--){
        for(int i = 0; i < n-1; ){
            if(Q[i] == 'B' && Q[i+1] == 'G'){
                Q[i] = 'G';
                Q[i+1] = 'B';
                i++;
            }
            i++;
        }
    }

    printf("%s\n", Q);

    return 0;
}

