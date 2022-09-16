#include <iostream>

using namespace std;

int main()
{
    int n;
    int A[100005];
    scanf("%d", &n);

    for(int i = 0; i < n; i++) scanf("%d", &A[i]);

    int flag = A[0];
    int group = 1;

    for(int i = 1; i < n; i++){
        if(flag != A[i]){
            flag = A[i];
            group++;
        }
    }

    printf("%d\n", group);

    return 0;
}

