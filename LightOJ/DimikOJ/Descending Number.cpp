#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int i = 1000; i >= 1; i--){
        if(!(i%5) && i != 1000) cout << "\n";
        cout << i << " ";
    }
    cout << "\n";
}
