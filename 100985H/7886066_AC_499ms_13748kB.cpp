#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    scanf("%d",&N);

    int a[N+2],b[N+2],c[N+2];
    long long int F=0,C=0;

    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<N;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<N;i++)
        scanf("%d",&c[i]);

    for(int i=0;i<N;i++)
    {
        F +=(a[i]-b[i])*(a[i]-b[i]);

    }
    for(int i=0;i<N;i++)
    {
        C +=(a[i]-c[i])*(a[i]-c[i]);

    }

    double ft,cn;
    ft = sqrt(F);
    cn = sqrt(C);

    //cout<<"F = "<<F<<" C = "<<C<<endl;

    if(ft<=cn)
        printf("Yan\n");
    else
        printf("MaratonIME\n");




}