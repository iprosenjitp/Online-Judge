#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    char ch, name[100];

    scanf("%d", &t);
    scanf("%c", &ch);
    while(t--){
        scanf("%s", name);
        scanf("%d", &n);

        if(name[0] == 'T' && name[1] == 'h' && name[2] == 'o' && name[3] == 'r') printf("Y\n");
        else printf("N\n");
    }

    return 0;
}
