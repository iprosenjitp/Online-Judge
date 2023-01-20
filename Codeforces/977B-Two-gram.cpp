#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V;
    int n;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 0; i < n-1; i++){
        string ans = "";
        for(int x = i; x < i+2; x++) ans += str[x];
        int cnt = 1;
        for(int j = i+1; j < n-1; j++){
            string temp = "";
            for(int y = j; y < j+2; y++) temp += str[y];
            if(ans == temp) cnt++;
        }
        V.push_back(cnt);
    }
    int big = V[0], flag = 0;
    for(int i = 1; i < V.size(); i++){
        if(big < V[i]) {
            big = V[i];
            flag = i;
        }
    }
    cout << str[flag] << str[flag+1];
    cout << "\n";

    return 0;
}

