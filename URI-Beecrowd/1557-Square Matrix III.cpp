#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n;

    while(1){
        scanf("%d", &n);
        if(n == 0) break;

        for(ll i = 0, x = 1; i < n; i++, x *= 2){
            for(ll j = 0, y = x; j < n; j++, y *= 2){
                if(n == 1) printf("%lld", y);

                else if(n == 2){
                    if(j == 0) printf("%lld", y);
                    else printf(" %lld", y);
                }

                else if(n == 3 || n == 4) {
                    if(j == 0) printf("%2lld", y);
                    else printf("%3lld", y);
                }

                else if(n == 5){
                    if(j == 0) printf("%3lld", y);
                    else printf("%4lld", y);
                }

                else if(n == 6 || n == 7){
                    if(j == 0) printf("%4lld", y);
                    else printf("%5lld", y);
                }

                else if(n == 8 || n == 9){
                    if(j == 0) printf("%5lld", y);
                    else printf("%6lld", y);
                }

                else if(n == 10){
                    if(j == 0) printf("%6lld", y);
                    else printf("%7lld", y);
                }

                else if(n == 11 || n == 12){
                    if(j == 0) printf("%7lld", y);
                    else printf("%8lld", y);
                }

                else if(n == 13 || n == 14){
                    if(j == 0) printf("%8lld", y);
                    else printf("%9lld", y);
                }

                else{
                    if(j == 0) printf("%9lld", y);
                    else printf("%10lld", y);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
