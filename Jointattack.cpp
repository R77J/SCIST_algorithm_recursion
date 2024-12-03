#include <bits/stdc++.h>
int main()
{
    int n;
    int result;
    int nums[40];
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>nums[i];
    }
    if(n==1)
    {
        std::cout<<nums[0];
        return 0;
    }
    else if(n==2)
    {
        std::cout<<nums[0]*nums[1]+1<<"/"<<nums[1];
        return 0;
    }
    long long int Denominator=nums[n-1];
    long long int front=nums[n-2];
    long long int Numerator=1;
    for(int i=n-1;i>=2;i--)
    {
        front=nums[i-1];
        Numerator=Denominator*front+Numerator;
        //std::cout<<front<<" "<<i-1<<":"<<Numerator<<"/"<<Denominator<<"\n";
        long long int temp=Numerator;
        Numerator=Denominator;
        Denominator=temp;
    }
    long long int time=std::gcd(Denominator,Denominator*nums[0]+Numerator);
    long long newNumerator=(Denominator*nums[0]+Numerator)/time;
    Denominator/=time;
    std::cout<<Denominator*nums[0]+Numerator<<"/"<<Denominator;
    return 0;
}