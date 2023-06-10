#include <bits/stdc++.h>
#define ll long long

using namespace std;

string reformatDate(string date)
{
    int n = date.size();
    string temp = "";
    string day = "";
    string mon = "";
    vector<string> months = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for(int i = 0; i < date.size(); i++) {
        if(date[i] >= '0' && date[i] <= '9') temp += date[i];
        else break;
    }
    if(temp.size() == 1) day += '0';
    day += temp;
    for(int i = 0; i < months.size(); i++){
        if(date.find(months[i]) != -1){
            if(i+1 < 10) mon += '0';
            mon += to_string(i+1);
        }
    }
    string year = date.substr(n-4, 4);
    return year + "-" + mon + "-" + day;
}

int main()
{
    string date;
    getline(cin, date);
    string ans = reformatDate(date);
    cout << ans << "\n";
}
