#include <iostream>
#include <vector>

using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue)
{
    int j = (ruleKey == "type") ? 0 : ((ruleKey == "color") ? 1 : 2);
    int cnt = 0;
    for(int i = 0; i < items.size(); i++){
        if(items[i][j] == ruleValue) cnt++;
    }
    return cnt;
}

int main()
{
    vector<vector<string>> V(3);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            string s;
            cin >> s;
            V[i].push_back(s);
        }
    }

//    for(int i = 0; i < 3; i++){
//        for(int j = 0; j < 3; j++) cout << V[i][j] << " ";
//        cout << "\n";
//    }

    string ruleKey, ruleValue;
    cin >> ruleKey >> ruleValue;
    int ans = countMatches(V, ruleKey, ruleValue);
    cout << ans << "\n";

    return 0;
}

/**
phone blue pixel computer silver lenovo phone gold iphone color silver
*/

