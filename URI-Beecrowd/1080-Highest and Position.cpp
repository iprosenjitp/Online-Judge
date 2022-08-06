#include<iostream>
using namespace std;

int main()
{
    int n[100], max, position;
    for(int i = 0; i < 100; i++){
        scanf("%d", &n[i]);
    }
    max = n[0];
    for(int i = 0; i < 100; i++){
        if(max < n[i]){
            max = n[i];
            position = i + 1;
        }
    }
    printf("%d\n", max);
    printf("%d\n", position);

    return 0;
}
