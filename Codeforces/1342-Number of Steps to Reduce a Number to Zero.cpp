#include <iostream>

using namespace std;

int numberOfSteps(int num)
{
    int ans = 0;
    while(num){
        if((num&1) == 1) num--;
        else num = num >> 1;
        ans++;
//        if(num%2) num = num-1;
//        else num = num/2;
//        ans++;
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d", &n);
    int res = numberOfSteps(n);
    printf("%d\n", res);
    return 0;
}

