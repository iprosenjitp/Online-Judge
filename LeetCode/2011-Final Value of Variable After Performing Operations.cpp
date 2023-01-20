#include <iostream>
#include <vector>

using namespace std;

int finalValueAfterOperations(vector<string>& operations)
{
    int ans = 0;
    for(int i = 0; i < operations.size(); i++){
        if(operations[i][1] == '+') ans++;
        else ans--;
    }
    return ans;
}

int main()
{
    vector<string> operations;
    for(int i = 0; i < 3; i++){
        string S;
        cin >> S;
        operations.push_back(S);
    }
    int ans = finalValueAfterOperations(operations);
    cout << ans << "\n";

    return 0;
}

