#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isSameAfterReversals(int num)
{
    if(num && num%10 == 0) return false;
    else return true;
}

int main()
{
    int num;
    cin >> num;
    bool ans = isSameAfterReversals(num);
    if(ans) cout << "true\n";
    else cout << "false\n";
}
