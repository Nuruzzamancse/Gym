#include<bits/stdc++.h>

using namespace std;

int main()
{
    int P, T;

    scanf("%d %d",&P,&T);

    int arr[P+2];

    for(int i=0;i<P;i++)
        scanf("%d",&arr[i]);

    int sum=0;
    int Y=0, N=0;
    for(int i=0;i<P;i++)
    {
        if((sum+arr[i])<=T){
            Y++;
            sum +=arr[i];
        }
        else
            break;
    }

    sum=0;
    for(int i=P-1;i>=0;i--)
    {
        if((sum+arr[i])<=T)
        {
            N++;
            sum +=arr[i];
        }
        else
            break;
    }

    //printf("Y = %d, N= %d",Y,N);
    if(Y>N)
        printf("Yan\n");
    else if(Y<N)
        printf("Nathan\n");
    else
        printf("Empate\n");

}