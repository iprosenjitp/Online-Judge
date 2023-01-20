#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    while(num){
        if(num%10 == 1 || num%100 == 14 || num%1000 == 144){
            num /= 10;
        }
        else {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}

