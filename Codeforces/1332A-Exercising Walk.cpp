#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        x = x+b-a;
		y = y+d-c;
		if(x>=x1 && x<=x2 && y>=y1 && y<=y2 &&(x2>x1 || a+b==0)&&(y2>y1 || c+d==0)) cout<<"Yes\n";
		else cout<<"No\n";
    }
}
