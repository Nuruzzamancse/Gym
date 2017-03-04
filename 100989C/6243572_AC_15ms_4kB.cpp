#include<bits/stdc++.h>

using namespace std;

int main()
{


 int n;

 int sum1=0, sum2=0;

 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {

  int input1, input2;

  scanf("%d %d",&input1,&input2);

  sum1+=input1;
  sum2+=input2;

 }

 printf("%d\n",sum2-sum1);




}