#include <iostream>

using namespace std;

int main()
{
    string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string str;
    char ch;
    cin >> ch;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        int j;
        for(j = 0; j < kb.length(); j++){
            if(str[i] == kb[j]) break;
        }
        if(ch == 'R') cout << kb[j-1];
        else cout << kb[j+1];
    }
    cout << "\n";

    return 0;
}

