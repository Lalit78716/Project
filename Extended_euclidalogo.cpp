#include<bits/stdc++.h>
using namespace std;
long int getgcd(long int a,long int b,long int& x,long int& y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}
	long int x1,y1;
	long int d = getgcd(b,a%b,x1,y1);
	x=y1;
	y=x1-y1*(a/b);
	return d;
}
int main()
{
#ifndef DO
	freopen("ip.txt","r",stdin);
	freopen("op.txt","w",stdout);
#endif
	long int a,b,x,y;
	cin>>a>>b;
	long int d=getgcd(a,b,x,y);
	cout<<x<<" "<<y<<" "<<d;
}