#include<bits/stdc++.h>
using namespace std;
int n,b,d,s,x,l;
int main()
{
	cin>>n>>b>>d;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x<=b)l+=x;
		if(l>d)s++,l=0;
	}
	cout<<s;
}
