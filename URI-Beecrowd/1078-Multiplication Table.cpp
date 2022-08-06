#include<iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if(n >= 1 && n <= 1000){
        for(int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", i, n, i*n);
        }
    }
}
