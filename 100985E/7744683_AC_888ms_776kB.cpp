#include<bits/stdc++.h>

using namespace std;

int main()
{
    int input, query;

    cin>>input>>query;

    int arra[input+5],sld[input+5];

    for(int i=1; i<=input; i++)
    {
        cin>>arra[i];

        if(i==1)
            sld[i] = arra[i];

        if(i>1)
        {
            sld[i]=sld[i-1]+arra[i];
        }
    }

    while(query--)
    {
       int l,r;

       cin>>l>>r;

       int sum = sld[r]-sld[l-1];

       if(sum%2)
        cout<<"Nao"<<endl;
       else
        cout<<"Sim"<<endl;
    }
}