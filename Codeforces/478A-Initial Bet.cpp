#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int l = a+b+c+d+e;
    if(l%5==0 && l>0) cout<<l/5;
    else cout<<"-1";
}
