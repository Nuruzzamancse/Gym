#include<bits/stdc++.h>

using namespace std;

int main()
{
    double m, n, k;

    bool flag = false;

    cin>>n>>m>>k;

    double remain = n-m;

    int i;



    for(i=1;i<=remain;i++)
    {
        double  res =(k+i)/n;


        res*=100;


        if(res>=70){
            flag = true;
            break;
        }
    }

    if(((k/n)*100)>=70)
        cout<<0<<endl;
    else if(flag)
    {
        cout<<i<<endl;
    }
    else
        cout<<-1<<endl;


     int prdct=((remain+k)*100)/n;

    cout<<prdct<<endl;


}