#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n > 45) {
            cout << "-1\n";
            continue;
        }
        int flag;
        for(int i = 9; i >= 1; i--){
            if(n > i) n -= i;
            else {
                flag = i;
                break;
            }
        }
        cout << n;
        for(int i = flag+1; i <= 9; i++){
            cout << i;
        }
        cout << "\n";

    }

    return 0;
}

