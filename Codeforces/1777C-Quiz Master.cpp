#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V;
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            int ni;
            cin >> ni;
            V.push_back(ni);
        }
    }

    return 0;
}

