#include <bits/stdc++.h>
int t()
{
    std::string m;
    std::cin>>m;
    if(m=="f")
    {
        int x=t();
        return 2*x-3;
    }
    else if(m=="g")
    {
        int x=t();
        int y=t();
        return 2*x+y-7;
    }
    else if(m=="h")
    {   
        int x=t();
        int y=t();
        int z=t();
        return 3*x-2*y+z;
    }
    else
    {
        return std::stoi(m);
    }
}
int main()
{
    int result=t();
    std::cout<<result;
    return 0;
}
