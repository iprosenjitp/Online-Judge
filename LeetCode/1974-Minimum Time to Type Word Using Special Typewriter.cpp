#include <bits/stdc++.h>
#define ll long long

using namespace std;

int minTimeToType(string word)
{
    int cnt = 0;
    char cur = 'a';
    for(int i = 0; i < word.size(); i++){
        int a, b;
        if(word[i] >= cur) {
            a = word[i]-cur;
            b = ('z'-word[i]) + (cur-'a') + 1;
        }
        else{
            a = ('z'-cur) + (word[i]-'a') + 1;
            b = cur-word[i];
        }

        int x = min(a, b);
        cnt += x+1;
        cur = word[i];
//        cout << a << " " << b << " " << cnt << "\n";
    }
    return cnt;
}

int main()
{
    string w;
    cin >> w;
    int ans = minTimeToType(w);
    cout << ans << "\n";
}
