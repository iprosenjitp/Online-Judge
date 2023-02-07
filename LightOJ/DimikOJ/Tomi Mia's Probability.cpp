#include <bits/stdc++.h>
#define MAX_LEN 202

using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--){
        char str[MAX_LEN];
        fgets(str, MAX_LEN, stdin);
        str[strlen(str) - 1] = '\0';
//        cout << str << "\n";
        char* word;
        word = strtok(str, " ");
        cout << word << "\n";
    }
}
