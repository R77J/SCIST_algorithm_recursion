#include <bits/stdc++.h>
const long long limit=1e18+5;
long long int l[100000];

char f(int n,long long int k)
{
    //std::cout<<n<<" "<<k<<"\n";
    if(n>100)return n%2==1 ? f(99,k):f(100,k);//因為n>100之後長度最多都只能存到10^18,而k最多到10^18所以絕對不會有超過的問題
    if(n==1)return 'N';
    if(n==2) return 'A';
    if(k<=l[n-2])return f(n-2,k);
    return f(n-1,k-l[n-2]);
}
int main()
{
    l[1]=1;
    l[2]=1;
    long long int n,k;
    std::cin>>n>>k;
    for(int i=3;i<=n;i++)
    {
        l[i]=std::min(limit,l[i-1]+l[i-2]);
    }
    char result=f(n,k);
    std::cout<<result;
    return 0;
}