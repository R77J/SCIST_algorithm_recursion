#include <bits/stdc++.h>
bool isbalance(long long int& totalweight)
{   
    long long int w1;
    long long int l1;
    long long int w2;
    long long int l2;
    std::cin>>w1>>l1>>w2>>l2;
    if(w1==0)
    {
        if(!isbalance(w1))return false;
    }
    if(w2==0)
    {
        if(!isbalance(w2))return false;
    }
    totalweight+=w1+w2;

    if(w1*l1==w2*l2)return true;
    else return false;

}
int main()
{
    long long int n=0;
    std::cin>>n;
    long long int totalweight=0;
    for(long long int i=0;i<n;i++)
    {
        totalweight=0;
        if(!isbalance(totalweight))
        {
            std::cout<<"NO\n";
            continue;
        }
        std::cout<<"YES\n";
    }

    return 0;
}

/*原判斷函式

bool isbalance=true;
long long int balance()
{
    long long int w1;
    long long int l1;
    long long int w2;
    long long int l2;
    std::cin>>w1>>l1>>w2>>l2;
    if(w1==0)
    {
        w1=balance();
    }
    if(w2==0)
    {
        w2=balance();  
    }
    if(w1*l1!=w2*l2)isbalance=false;
    
    return w1+w2;
}



*/