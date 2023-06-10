#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> numberOfLines(vector<int>& widths, string s)
{
    int line = 1;
    int sum = 0;
    vector<int> ans(2);
    for(int i = 0; i < s.size(); i++){
        int ind = s[i]-'a';
        if(sum+widths[ind] > 100){
            line++;
            sum = 0;
        }
        sum += widths[ind];
    }
    ans[0] = line;
    ans[1] = sum;
    return ans;
}

int main()
{
    vector<int> widths(26);
    for(int i = 0; i < widths.size(); i++) cin >> widths[i];
    string s;
    cin >> s;
    vector<int> ans = numberOfLines(widths, s);
    cout << ans[0] << " " << ans[1] << "\n";
}

/**
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
abcdefghijklmnopqrstuvwxyz

4 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
bbbcccdddaaa
*/
