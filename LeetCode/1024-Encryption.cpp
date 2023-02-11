#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--){
        string str;
        getline(cin, str);
        for(int i = 0; i < str.length(); i++){
            if(isalpha(str[i])) str[i] += 3;
        }
        for(int i = 0, j = str.length()-1; i < str.length()/2; i++, j--){
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp - 1;
        }
        if(str.length()%2) str[str.length()/2] -= 1;
        cout << str << "\n";
    }
}
