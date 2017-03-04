#include<bits/stdc++.h>

using namespace std;

int main()
{
    char grid[1005][1005];

    int N, M;

    scanf("%d %d",&N,&M);

    getchar();

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%c",&grid[i][j]);
        }
        getchar();
    }

    int mx=-1, cnt=0;
    int fct=1;
    for(int i=0; i<N; i++)
    {
        if(fct%2)
        {

            for(int j=0; j<M; j++)
            {
                //printf("%d%d->",i,j);
                if(grid[i][j]=='.')
                {
                    cnt++;

                }
                else if(grid[i][j]=='L')
                {
                    mx=max(mx,cnt);

                    cnt=0;
                }
            }
        }
        else if(fct%2==0)
        {
            //printf("Left\n");
            for(int j=M-1; j>=0; j--)
            {
                //printf("%d%d->",i,j);
                if(grid[i][j]=='.')
                {
                    cnt++;

                }
                else if(grid[i][j]=='L')
                {
                    mx=max(mx,cnt);

                    cnt=0;
                }
            }
        }


        fct++;
    }

    printf("%d\n",max(mx,cnt));

}