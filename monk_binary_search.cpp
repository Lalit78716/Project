#include<bits/stdc++.h>
using namespace std;

long long int A,B,C,K;

int fill(long long int x)
{
    return A*x*x+B*x+C;
}

int binarySearch()
{
    if(C>=K)
        return 0;
    int H=ceil(sqrt(K));
    int L=1;

    while(L<=H)
    {
        int mid=(H+L)/2;
        long long int x=fill(mid);
        long long int y=fill(mid-1);

        if(x>=K && y<K)
            return mid;
        if(x<K)
            L=mid+1;
        else
            H=mid-1;

    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>A>>B>>C>>K;
        cout<<binarySearch()<<endl;
    }
    return 0;
}
