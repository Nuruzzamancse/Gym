#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c;
    cin>>a>>b>>c;

    int rem = a-b;

    int flag=0;

    if(((c/a)*100)>=70.0)
    {
        flag=1;
        cout<<0<<endl;
    }
    else
        for(int i=1; i<=rem; i++)
        {
            if(((c+i)/a)*100>=70)
            {
                flag=1;
                cout<<i<<endl;
                break;

            }
        }
   if(flag==0)
    cout<<-1<<endl;

   cout<<int(((rem+c)/a)*100)<<endl;
}