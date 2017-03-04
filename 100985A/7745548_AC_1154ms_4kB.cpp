#include<bits/stdc++.h>

using namespace std;

long long int gcd(long long int a, long long int b)
{
    return b==0?a:gcd(b,a%b);
}
long long int lcm(long long int a, long long int b)
{
    return a*(b/gcd(a,b));
}

int main()
{
    long long int k;

    cin>>k;

    while(k--)
    {
        long long int a, b;

        cin>>a>>b;

        long long int p = lcm(a,b);

        if(p!=(a*b))
            cout<<"Sim"<<endl;
        else
            cout<<"Nao"<<endl;
    }
}