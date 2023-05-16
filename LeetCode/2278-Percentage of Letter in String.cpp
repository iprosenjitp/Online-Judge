#include <bits/stdc++.h>
#define ll long long

using namespace std;

int percentageLetter(string s, char letter)
{
    int cnt = 0;
	for(int i = 0; i < s.size(); i++)
		if(s[i] == letter) cnt++;
	return (cnt * 100) / s.size();
}

int main()
{
    string s;
    char l;
    cin >> s >> l;
    int ans = percentageLetter(s, l);
    cout << ans << "\n";
}


/**
foobar o
*/
