#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, cnt25 = 0, cnt50 = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int ni;
        cin >> ni;
        (ni == 25) ? cnt25++ : (cnt25--, (ni == 50) ? cnt50++ : cnt50--);
        if(cnt50 < 0) cnt50++, cnt25 -= 2;
        if(cnt25 < 0) return cout << "NO\n", 0;
    }
    cout << "YES\n";
}

//int main()
//{
//    int n, ruble25 = 0, ruble50 = 0;
//    bool ans = true;
//    cin >> n;
//    vector<int> V(n);
//    for(int i = 0; i < n; i++) cin >> V[i];
//    for(int i = 0; i < n; i++){
//        int x = V[i] - 25;
//        if(x == 0) ruble25++;
//        else if(x == 25) {
//            if(ruble25 <= 0) {
//                ans = false;
//                break;
//            }
//            else ruble25--;
//            ruble50++;
//        }
//        else if(x == 75){
//            bool flag = true;
//            if(ruble50 <= 0) flag = false;
//            else {
//                ruble50--;
//                flag = true;
//            }
//            if(flag){
//                if(ruble25 <= 0){
//                    ans = false;
//                    break;
//                }
//                else ruble25--;
//            }
//            else {
//                if(ruble25 <= 2){
//                    ans = false;
//                    break;
//                }
//                else ruble25 -= 3;
//            }
//        }
//    }
//    if(ans) cout << "YES\n";
//    else cout << "NO\n";
//}
