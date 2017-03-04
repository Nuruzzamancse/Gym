#include<bits/stdc++.h>

using namespace std;

int main()
{

    int k;

    scanf("%d",&k);

    int mx=-1;
    long long int input,cnfs=-1,cnt2=0;
    int pos=0;
    for(int i=1;i<=k;i++)
    {
        cin>>input;

        if(input>mx)
        {
            mx = input;
            pos=i;

        }
        else if(input==mx)
        {
          cnfs = input;
          cnt2++;
        }

    }

    if(cnfs==mx)
        cout<<-1<<endl;
    else
        cout<<pos<<endl;


   return 0;
}