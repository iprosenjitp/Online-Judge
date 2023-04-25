#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		set<int> r, s;
		int i, j;
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				cin >> a[i][j];
				if(a[i][j] > 0){
					s.insert(j);
					r.insert(i);
				}
			}
		}
		int mn = min(n-r.size(), m-s.size());
		if(mn%2 == 0) cout << "Vivek\n";
		else cout << "Ashish\n";

	}
}
