#include <iostream>
using namespace std;
int main()
{
    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        int mary = 0, john = 0, x;
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            if(x == 0) mary++;
            else john++;
        }
        printf("Mary won %d times and John won %d times\n", mary, john);
    }
    return 0;
}

