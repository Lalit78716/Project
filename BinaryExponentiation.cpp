#include<bits/stdc++.h>
using namespace std;
int expo(int a,int b)
{
	long int res=1;
	while(b)
	{
		if(b & 1)
		{
			res=res*a;
		}
		a*=a;
		b>>=1;
	}
	return res;
}
int exporec(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	long int res=exporec(a,b/2);
	if(b & 1)
	{
		return res*res*a;
	}	
	else
		return res*res;
}
int main()
{
#ifndef DO
	freopen("ip.txt","r",stdin);
	freopen("op.txt","w",stdout);
#endif
	int a,b;
	cin>>a>>b;
	cout<<exporec(a,b);
}