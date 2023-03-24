#include <bits/stdc++.h>
#define ll long long

using namespace std;

char nextGreatestLetter(vector<char>& letters, char target)
{
    int left = 0, right = letters.size();
    while(left < right){
        int mid = (left+right) / 2;
        if(letters[mid] > target) right = mid;
        else left = mid+1;
    }
    if(left >= letters.size()) return letters[0];
    return letters[left];
}

int main()
{
    vector<char> letters;
    for(int i = 0; i < 4; i++){
        char letter;
        cin >> letter;
        letters.push_back(letter);
    }
    char target;
    cin >> target;
    char ans = nextGreatestLetter(letters, target);
    cout << ans << "\n";
}

/**
c f j
a

x x y y
z
*/
