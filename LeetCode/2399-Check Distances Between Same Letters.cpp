#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool checkDistances(string s, vector<int>& distance)
{
    int len = s.size();
    for(int i = 0; i < 26; i++){
        char ch = 'a' + i;
        int a = s.find(ch);
        if(a != -1){
            string str = s.substr(a+1, len-a-1);
            int b = a + 1 + str.find(ch);
            if((b-a-1) != distance[i]) return false;
        }
    }
    return true;
}

int main()
{
    string s;
    vector<int> dis(26);
    cin >> s;
    for(int i = 0; i < 26; i++) cin >> dis[i];
    bool ans = checkDistances(s, dis);
    if(ans) cout << "ture\n";
    else cout << "false\n";
}


/**
abaccb
1 3 0 5 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
*/
