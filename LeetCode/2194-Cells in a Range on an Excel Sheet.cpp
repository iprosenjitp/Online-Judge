#include <bits/stdc++.h>

using namespace std;

vector<string> cellsInRange(string s)
{
    vector<string> ans;
    for(int i = (s[0] - 'A'); i <= (s[3] - 'A'); i++){
        for(int j = (s[1] - '0'); j <= (s[4] - '0'); j++){
            string cell = "";
//            cout << i << " " << j << "\n";
            char C = 'A'+i;
            char R = '0'+j;
//            cout << C << " " << R << "\n";
            cell += C;
            cell += R;

            ans.push_back(cell);
        }
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = cellsInRange(s);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
