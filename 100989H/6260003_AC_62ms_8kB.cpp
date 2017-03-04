#include<bits/stdc++.h>

using namespace std;

map<int, int> mp;
int cal(int money, int vlu)
{

    while(money>=vlu && mp[vlu]>0)
    {

        money -= vlu;
        mp[vlu]--;

    }
    return money;

}

int main()
{

    mp[1] = 0;
    mp[5] = 0;
    mp[10] = 0;
    mp[20] = 0;
    mp[50] = 0;

    int n, K, F1, F2 , F3, F4, F5;

    bool chk = false;

    scanf("%d",&n);

    while(n--)
    {

     scanf("%d %d %d %d %d %d",&K,&F1,&F2,&F3,&F4,&F5);

        if(chk)
        continue;

        int money = (F1*1)+(F2*5)+(F3*10)+(F4*20)+(F5*50);

        mp[1] +=F1 ;
        mp[5] +=F2;
        mp[10] +=F3;
        mp[20] +=F4;
        mp[50] +=F5;

        money = (money-K);

        money = cal(money,50);
        money = cal(money,20);
        money = cal(money,10);
        money = cal(money,5);
        money = cal(money,1);

        if(money>0)
         chk = true;

    }

    if(chk)
     printf("no");
    else
     printf("yes");



}