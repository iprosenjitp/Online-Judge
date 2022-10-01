#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--){
        int n;
        vector<int> V;
        int cnt = 0;

        scanf("%d", &n);

        for(int i = 1; n; i *= 10){
            int mod = n%10;
            if(mod){
                V.push_back(mod*i);
                cnt++;
            }
            n /= 10;
        }

        printf("%d\n", cnt);
        for(int i = 0; i < V.size(); i++) printf("%d ", V[i]);
        printf("\n");
    }

    return 0;
}

