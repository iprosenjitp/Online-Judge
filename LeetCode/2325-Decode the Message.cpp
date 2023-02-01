#include <bits/stdc++.h>

using namespace std;

string decodeMessage(string key, string message)
{
    char A[26];
    string K = "";
    int cnt = 0;
    for(int i = 0; i < 26; i++) A[i] = 0;
    for(int i = 0; i < key.length() && cnt <= 26; i++){
        if(key[i] == ' ' || A[key[i] - 'a'] == 1) continue;
        else{
            K += key[i];
            A[key[i] - 'a'] = 1;
            cnt++;
        }
    }
    for(int i = 0; i < message.length(); i++){
        for(int j = 0; j < 26; j++){
            if(message[i] != ' ' && message[i] == K[j]){
                message[i] = 'a' + j;
                break;
            }
        }
    }
    return message;
}

int main()
{
    string key, message;
    getline(cin, key);
    getline(cin, message);
    string ans = decodeMessage(key, message);
    cout << ans << "\n";
}
