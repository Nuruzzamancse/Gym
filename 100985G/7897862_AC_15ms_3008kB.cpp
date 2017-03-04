#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[1000000];

    gets(ch);

    int c=0;

    bool flag=true;

    for(int i=0;ch[i];i++)
    {
        if(ch[i]=='A')
            c++;
        if(ch[i]=='B')
            c--;
        if(c<0)
            flag = false;
    }

    if(flag&&c==0)
        printf("Sim\n");
    else
        printf("Nao\n");
}