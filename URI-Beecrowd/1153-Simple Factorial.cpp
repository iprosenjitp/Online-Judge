#include<iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    scanf("%d", &n);
    if(n > 0 && n < 13){
        for(int i = n; i >= 1; i--){
            fact *= i;
        }
        printf("%d\n", fact);
    }
    return 0;
}
