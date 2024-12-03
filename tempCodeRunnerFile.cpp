#include <bits/stdc++.h>
const long long limit=1e18+5;
long long int l[10000];

char f(int n,long long int k)
{
    if(n==1)return 'N';
    if(n==2) return 'A';
    if(k<=l[n-2])return f(n-2,k);
    return f(n-1,k-l[n-2]);
}
int main()
{
    l[1]=1;
    l[2]=1;
    int n,k;
    std::cin>>n>>k;
    for(int i=3;i<=k;i++)
    {
        l[i]=std::min(limit,l[i-1]+l[i-2]);
    }
    char result=f(n,k);
    std::cout<<result;
    return 0;
}