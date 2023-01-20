#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

bool isPalindrome(int x)
{
    if(x < 0) return false;
    int temp = x;
    vector<int> V;
    long long int y = 0;
    while(x){
        V.push_back(x%10);
        x /= 10;
    }
    int len = V.size() - 1;
    for(int i = 0; i < V.size(); i++){
        y += V[i] * pow(10, (len-i));
    }

    if(temp == y) return true;
    return false;
}

int main()
{
    int num;
    cin >> num;
    bool ans = isPalindrome(num);
    if(ans) cout << "true\n";
    else cout << "false\n";

    return 0;
}

