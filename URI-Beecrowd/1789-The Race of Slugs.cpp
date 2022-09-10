#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, s;
    while(scanf("%d", &l) != EOF){
        int maxSpeed = 0;
        for(int i = 0; i < l; i++){
            scanf("%d", &s);
            if(s > maxSpeed){
                maxSpeed = s;
            }
        }
        if(maxSpeed < 10) printf("1\n");
        else if(maxSpeed < 20) printf("2\n");
        else printf("3\n");
    }
    return 0;
}
