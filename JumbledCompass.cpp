#include <bits/stdc++.h>
int main()
{
    int a,b;
    std::cin>>a;
    std::cin>>b;
    if(a>b)b+=360;
    int clockwise=b-a;
    if(a>b-360)b-=360;

    if(b>a)a+=360;
    int counterclockwise=a-b;
    if(clockwise>counterclockwise)std::cout<<counterclockwise*-1;
    else std::cout<<clockwise;

    return 0;
}