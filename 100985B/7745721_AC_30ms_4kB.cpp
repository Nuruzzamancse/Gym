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


    int arra[k+5],sld[k+5];

    for(int i=1; i<=k; i++)
    {
        cin>>arra[i];

    }
    int i,j;
    for( i=1,j=1; i<=100;i++,j*=2)
    {
        if(j>k)
            break;

    }
    cout<<i-1<<endl;



}