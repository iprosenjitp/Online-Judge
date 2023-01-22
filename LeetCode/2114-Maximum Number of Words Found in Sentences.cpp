#include <iostream>
#include <vector>

using namespace std;

int mostWordsFound(vector<string>& sentences)
{
    int word = 0;
    for(int i = 0; i < sentences.size(); i++){
        int cnt = 0;
        for(int j = 0; j < sentences[i].length(); j++){
            if(sentences[i][j] == ' ') cnt++;
        }
        cnt++;
        if(cnt > word) word = cnt;
    }
    return word;
}

int main()
{
    vector<string> sentences;
    for(int i = 0; i < 3; i++){
        string sentence;
        cin >> sentence;
        sentences.push_back(sentence);
    }
    int ans = mostWordsFound(sentences);
    cout << ans << "\n";

    return 0;
}

