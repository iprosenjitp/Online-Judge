#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
	cin >> t;
	while(t--){
        int n;
		cin >> n;
		for(int i = 1; i <= n; i++)
		if(4*i > 3*n) cout << 8;
		else cout << 9;
		cout << "\n";
	}
}
