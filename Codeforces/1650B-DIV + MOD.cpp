#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int l, r, a, maxVal, x;
        cin >> l >> r >> a;
        maxVal = r/a + r%a;
		x = r/a*a - 1;
		if(x >= l) maxVal = max(maxVal, x/a + x%a);
		cout << maxVal << "\n";
    }
}
