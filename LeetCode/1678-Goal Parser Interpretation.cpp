#include <bits/stdc++.h>

using namespace std;

string interpret(string command)
{
    string ans = "";
    for(int i = 0; i < command.length(); i++){
        if(command[i] == ')') continue;
        else if(command[i] == '('){
            if(command[i+1] == ')'){
                ans += 'o';
                i++;
            }
        }
        else ans += command[i];
    }
    return ans;
}

int main()
{
    string command;
    cin >> command;
    string ans = interpret(command);
    cout << ans << "\n";
}
