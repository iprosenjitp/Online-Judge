#include<iostream>
using namespace std;

int main()
{
    int a, b, c, area;
    while(1){
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0){
            break;
        }

        area = (a*b);
        printf("%d\n", area);
    }

    return 0;

}
