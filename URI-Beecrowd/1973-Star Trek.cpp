#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    ll n, sum = 0, cnt = 0, attack = 0;
    ll A[10006];
    ll B[10006];

    scanf("%lld", &n);

    for(int i = 0; i < n; i++){
        scanf("%lld", &A[i]);
        B[i] = A[i];
        sum += A[i];
    }

    ll i = 0;

    while(1){
//        printf("%lld %lld %lld\n", i, A[i], cnt);
        ll x = i;
        if(!A[i]) break;
        if(i < 0 || i >= n) break;

        cnt++;
        if(A[i]%2) i++;
        else i--;
        A[x]--;
    }

    for(int i = 0; i < n; i++){
        if(A[i] != B[i]) attack++;
    }


//    printf("%lld\n", sum);
//    printf("%lld\n", cnt);

    printf("%lld %lld\n", attack, sum-cnt);
    return 0;
}

