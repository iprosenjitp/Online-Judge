#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool judgeCircle(string moves)
{
    int x = 0, y = 0;
    for(int i = 0; i < moves.size(); i++){
        if(moves[i] == 'R') x++;
        else if(moves[i] == 'L') x--;
        else if(moves[i] == 'U') y++;
        else y--;
    }
    if(x || y) return false;
    return true;
}

int main()
{
    string moves;
    cin >> moves;
    bool ans = judgeCircle(moves);
    if(ans) cout << "true\n";
    else cout << "false\n";
}
