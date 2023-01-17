#include <iostream>
#include <vector>

using namespace std;

int numberOfSteps(int num){
    int ans = 0;
    while(num){
        if((num&1) == 1) num--;
        else num = num >> 1;
        ans++;
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;
    int ans = numberOfSteps(num);
    cout << ans << "\n";
    return 0;
}

