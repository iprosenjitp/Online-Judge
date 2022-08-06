#include<iostream>
using namespace std;
int main()
{
    int n, a = 0;
    scanf("%d", &n);
    for(int i = 1; i <=n; i++){
        for(int j = 1; j<= 3; j++){
            a++;
            printf("%d ", a);
        }
        printf("PUM\n");
        a++;
    }
    return 0;
}
