#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[1000000];

    gets(str);
    int cnt=0;
    for(int i=0;str[i];i++)
    {
        char ch=str[i];
        int cnt=1;
        for(int k=i+1;str[k];k++)
        {
            if(ch==str[k])
                cnt++;
            else
                break;
        }
        i+=cnt;
        i--;
        printf("%c%d",ch,cnt);

    }
}