#include <bits/stdc++.h>
#define ll long long

using namespace std;

//bool isPerfectSquare(int num)
//{
//    int x = sqrt(num);
//    if(x*x == num) return true;
//    return false;
//}

bool isPerfectSquare(int num)
{
    ll left = 0L, right = num;
    while(left < right){
        ll mid = (left+right) / 2L;
        ll sqr = mid*mid;
        if(sqr == num) return true;
        else if(sqr > num) right = mid-1;
        else left = left = mid+1;
    }
    if(left*left == num) return true;
    return false;
}

int main()
{
    int num;
    cin >> num;
    bool ans = isPerfectSquare(num);
    if(ans) cout << "true\n";
    else cout << "false\n";
}
