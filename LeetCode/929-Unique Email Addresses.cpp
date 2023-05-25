#include <bits/stdc++.h>
#define ll long long

using namespace std;

int numUniqueEmails(vector<string>& emails)
{
    set<string> S;
    for(int i = 0; i < emails.size(); i++){
        string email = emails[i];
        int foundAt = email.find('@');
        string local = email.substr(0, foundAt);
        string domain = email.substr(foundAt, email.size()-foundAt);
        string updateLocal = "";
        for(int j = 0; j < local.size(); j++){
            if(local[j] == '.') continue;
            if(local[j] == '+') break;
            updateLocal += local[j];
        }
        email = updateLocal+domain;
        S.insert(email);
    }
    return S.size();
}

int main()
{
    vector<string> emails(3);
    for(int i = 0; i < emails.size(); i++) cin >> emails[i];
    int ans = numUniqueEmails(emails);
    cout << ans << "\n";
}

/**
test.email+alex@leetcode.com
test.e.mail+bob.cathy@leetcode.com
testemail+david@lee.tcode.com

c@leetcode.com
b@leetcode.com
a@leetcode.com
*/
