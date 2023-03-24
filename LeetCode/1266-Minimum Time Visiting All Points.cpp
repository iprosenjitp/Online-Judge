#include <bits/stdc++.h>
#define ll long long

using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>>& points)
{
    int cnt = 0;
    for(int i = 0; i < points.size()-1; i++)
        cnt += max((abs(points[i][0]-points[i+1][0])), abs(points[i][1]-points[i+1][1]));
    return cnt;
}

int main()
{
    vector<vector<int>> points(2);
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            int p;
            cin >> p;
            points[i].push_back(p);
        }
    }
    int ans = minTimeToVisitAllPoints(points);
    cout << ans << "\n";
}

/**
1 1
3 4
-1 0


3 2
-2 2
*/
