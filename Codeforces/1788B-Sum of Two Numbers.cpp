#include <bits/stdc++.h>

using namespace std;

//int sumOfDigits(int n) {
//    int sum = 0;
//    while (n > 0) {
//        sum += n % 10;
//        n /= 10;
//    }
//    return sum;
//}

pair<int, int> findNumbers(int n) {
    int x, y;
    x = y = n/2;
    if(n%2) {
        y += 1;
        if((n/10)%2){
            x += 5;
            y -= 5;
        }
    }
    return make_pair(x, y);
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair<int, int> ans = findNumbers(n);
        cout << ans.first << " " << ans.second << "\n";
    }
}
